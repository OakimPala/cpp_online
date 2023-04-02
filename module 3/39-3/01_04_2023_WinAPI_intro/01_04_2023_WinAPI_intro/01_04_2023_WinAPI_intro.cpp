#include <windows.h>

#include "errors.h"

#define HM_BTN_SHOW_MSG 1
#define HM_BTN_QUIT		2

HWND btn;
HWND btn_quit;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow) {
	const wchar_t CLASS_NAME[] = L"Window Class";

	WNDCLASS wc = { };

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = CLASS_NAME;

	if (!RegisterClass(&wc)) {
		return ERR_REGISTER_CLASS;
	}

	HWND hwnd = CreateWindowEx(
		0,
		CLASS_NAME,
		L"Our window",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
		NULL,
		NULL,
		hInstance,
		NULL
	);

	if (hwnd == NULL) {
		return ERR_CREATE_WINDOW;
	}

	ShowWindow(hwnd, nCmdShow);

	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0) > 0) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	case WM_CREATE:
	{
		btn = CreateWindowEx(
			WS_EX_TRANSPARENT,
			TEXT("Button"),
			TEXT("Show message"),
			WS_CHILD,
			20, 20, 100, 50,
			hwnd,
			(HMENU)HM_BTN_SHOW_MSG,
			NULL,
			NULL
		);

		btn_quit = CreateWindowEx(
			WS_EX_TRANSPARENT,
			TEXT("Button"),
			TEXT("Quit"),
			WS_CHILD,
			130, 20, 100, 50,
			hwnd,
			(HMENU)HM_BTN_QUIT,
			NULL,
			NULL
		);

		ShowWindow(btn, SW_SHOW);
		UpdateWindow(btn);

		ShowWindow(btn_quit, SW_SHOW);
		UpdateWindow(btn_quit);
		break;
	}
	case WM_COMMAND:

		if (LOWORD(wParam) == HM_BTN_SHOW_MSG) {
			MessageBox(hwnd, L"Some text", L"Name window", MB_OK);
		}

		if (LOWORD(wParam) == HM_BTN_QUIT) {
			PostQuitMessage(0);
		}

		break;

	case WM_PAINT:
		PAINTSTRUCT ps;

		HDC hdc = BeginPaint(hwnd, &ps);
		FillRect(hdc, &ps.rcPaint, CreateSolidBrush(RGB(41, 128, 185)));
		EndPaint(hwnd, &ps);

		break;

	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}
