#ifndef DEFINES_H
#define DEFINES_H

// WINDOWS VIRTUAL KEYS

//ASCII KEY CODES
/*

ASCII	 Hex	 Symbol

0  0 NUL ## 16 10 DLE || 32 20 (space) || 48 30 0 || 64 40 @ || 80 50 P || 96  60 ` || 112 70 p
1  1 SOH || 17 11 DC1 || 33 21 !       || 49 31 1 || 65 41 A || 81 51 Q || 97  61 a || 113 71 q
2  2 STX || 18 12 DC2 || 34 22 "       || 50 32 2 || 66 42 B || 82 52 R || 98  62 b || 114 72 r
3  3 ETX || 19 13 DC3 || 35 23 #       || 51 33 3 || 67 43 C || 83 53 S || 99  63 c || 115 73 s
4  4 EOT || 20 14 DC4 || 36 24 $       || 52 34 4 || 68 44 D || 84 54 T || 100 64 d || 116 74 t
5  5 ENQ || 21 15 NAK || 37 25 %       || 53 35 5 || 69 45 E || 85 55 U || 101 65 e || 117 75 u
6  6 ACK || 22 16 SYN || 38 26 &       || 54 36 6 || 70 46 F || 86 56 V || 102 66 f || 118 76 v
7  7 BEL || 23 17 ETB || 39 27 '       || 55 37 7 || 71 47 G || 87 57 W || 103 67 g || 119 77 w
8  8 BS  || 24 18 CAN || 40 28 (       || 56 38 8 || 72 48 H || 88 58 X || 104 68 h || 120 78 x
9  9 TAB || 25 19 EM  || 41 29 )       || 57 39 9 || 73 49 I || 89 59 Y || 105 69 i || 121 79 y
10 A LF  || 26 1A SUB || 42 2A *       || 58 3A : || 74 4A J || 90 5A Z || 106 6A j || 122 7A z
11 B VT  || 27 1B ESC || 43 2B +       || 59 3B ; || 75 4B K || 91 5B [ || 107 6B k || 123 7B {
12 C FF  || 28 1C FS  || 44 2C ,       || 60 3C < || 76 4C L || 92 5C \ || 108 6C l || 124 7C |
13 D CR  || 29 1D GS  || 45 2D -       || 61 3D = || 77 4D M || 93 5D ] || 109 6D m || 125 7D }
14 E SO  || 30 1E RS  || 46 2E .       || 62 3E > || 78 4E N || 94 5E ^ || 110 6E n || 126 7E ~
15 F SI  || 31 1F US  || 47 2F /       || 63 3F ? || 79 4F O || 95 5F _ || 111 6F o || 127 7F

GLUT_KEY_LEFT 
GLUT_KEY_UP  
GLUT_KEY_RIGHT
GLUT_KEY_DOWN 2

KEY          KEY CODE  ASCII
LEFT  ARROW  37        0 
UP    ARROW  38        0 
RIGHT ARROW  39        0 
DOWN  ARROW  40        0 

LEFT  ARROW  75
UP    ARROW  72
RIGHT ARROW  77
DOWN  ARROW  80

ESCAPE KEY   27

*/

#define ESC_WIN 				GetAsyncKeyState(0x1B) != 0 //ESC
#define SPACE_WIN 			GetAsyncKeyState(0x20) != 0 //SPACE

#define DEL_WIN				GetAsyncKeyState(0x2E) != 0 //DEL
#define BACKSPACE_WIN		GetAsyncKeyState(0x08) != 0 //BACKSPACE
#define RETURN_WIN			GetAsyncKeyState(0x0D) != 0 //RETURN

#define LEFT_WIN 				GetAsyncKeyState(0x25) != 0 //LEFT
#define UP_WIN 				GetAsyncKeyState(0x26) != 0 //UP
#define RIGHT_WIN 			GetAsyncKeyState(0x27) != 0 //RIGHT
#define DOWN_WIN 				GetAsyncKeyState(0x28) != 0 //DOWN

#define A_WIN 					GetAsyncKeyState(0x41) != 0 //A
#define B_WIN 					GetAsyncKeyState(0x42) != 0 //B
#define C_WIN 					GetAsyncKeyState(0x43) != 0 //C
#define D_WIN 					GetAsyncKeyState(0x44) != 0 //D
#define E_WIN 					GetAsyncKeyState(0x45) != 0 //E
#define F_WIN 					GetAsyncKeyState(0x46) != 0 //F
#define G_WIN 					GetAsyncKeyState(0x47) != 0 //G
#define H_WIN 					GetAsyncKeyState(0x48) != 0 //H
#define I_WIN 					GetAsyncKeyState(0x49) != 0 //I
#define J_WIN 					GetAsyncKeyState(0x4A) != 0 //J
#define K_WIN 					GetAsyncKeyState(0x4B) != 0 //K
#define L_WIN 					GetAsyncKeyState(0x4C) != 0 //L
#define M_WIN 					GetAsyncKeyState(0x4D) != 0 //M
#define N_WIN 					GetAsyncKeyState(0x4E) != 0 //N
#define O_WIN 					GetAsyncKeyState(0x50) != 0 //O
#define P_WIN 					GetAsyncKeyState(0x51) != 0 //P
#define Q_WIN 					GetAsyncKeyState(0x51) != 0 //Q
#define R_WIN 					GetAsyncKeyState(0x52) != 0 //R
#define T_WIN 					GetAsyncKeyState(0x54) != 0 //T
#define S_WIN 					GetAsyncKeyState(0x53) != 0 //S
#define U_WIN 					GetAsyncKeyState(0x55) != 0 //U
#define V_WIN 					GetAsyncKeyState(0x56) != 0 //V
#define W_WIN 					GetAsyncKeyState(0x57) != 0 //W
#define X_WIN 					GetAsyncKeyState(0x58) != 0 //X
#define Y_WIN 					GetAsyncKeyState(0x59) != 0 //Y
#define Z_WIN 					GetAsyncKeyState(0x5A) != 0 //Z

// SDL TYPE EVENTS

#define POLLEVENT				SDL_PollEvent(&e) != 0
#define QUIT					e.type == SDL_QUIT
#define DOWNPRESS				e.type == SDL_KEYDOWN
#define UPPRESS				e.type == SDL_KEYUP

#define MOUSEWHEEL			e.type == SDL_MOUSEWHEEL

#define MOUSEMOTION			e.type == SDL_MOUSEMOTION
#define MOUSEBUTTONDOWN		e.type == SDL_MOUSEBUTTONDOWN
#define MOUSEBUTTONUP		e.type == SDL_MOUSEBUTTONUP
		
// SDL KEYCODE

#define LEFTMOUSEBUTTON		e.button.button == SDL_BUTTON_LEFT
#define RIGHTMOUSEBUTTON	e.button.button == SDL_BUTTON_RIGHT
#define MIDDLEMOUSEBUTTON	e.button.button == SDL_BUTTON_MIDDLE

#define LCTRL					e.key.keysym.sym == SDLK_LCTRL
#define LSHIFT					e.key.keysym.sym == SDLK_LSHIFT
#define LALT					e.key.keysym.sym == SDLK_LALT

#define RCTRL					e.key.keysym.sym == SDLK_RCTRL
#define RSHIFT					e.key.keysym.sym == SDLK_RSHIFT
#define RALT					e.key.keysym.sym == SDLK_RALT

#define ESCAPE					e.key.keysym.sym == SDLK_ESCAPE
#define DEL						e.key.keysym.sym == SDLK_DELETE
#define BACKSPACE				e.key.keysym.sym == SDLK_BACKSPACE
#define SPACE					e.key.keysym.sym == SDLK_SPACE

#define UP						e.key.keysym.sym == SDLK_UP
#define DOWN					e.key.keysym.sym == SDLK_DOWN
#define LEFT					e.key.keysym.sym == SDLK_LEFT
#define RIGHT					e.key.keysym.sym == SDLK_RIGHT
#define RETURN					e.key.keysym.sym == SDLK_RETURN

#define PAGEUP					e.key.keysym.sym == SDLK_PAGEUP
#define PAGEDOWN				e.key.keysym.sym == SDLK_PAGEDOWN

#define HOME					e.key.keysym.sym == SDLK_HOME
#define END				      e.key.keysym.sym == SDLK_END

#define EQUALS					e.key.keysym.sym == SDLK_EQUALS
#define MINUS					e.key.keysym.sym == SDLK_MINUS

// SDL NUMBERS

#define ZERO					e.key.keysym.sym == SDLK_0
#define ONE						e.key.keysym.sym == SDLK_1
#define TWO						e.key.keysym.sym == SDLK_2
#define THREE					e.key.keysym.sym == SDLK_3
#define FOUR					e.key.keysym.sym == SDLK_4
#define FIVE					e.key.keysym.sym == SDLK_5
#define SIX						e.key.keysym.sym == SDLK_6
#define SEVEN					e.key.keysym.sym == SDLK_7
#define EIGHT					e.key.keysym.sym == SDLK_8
#define NINE					e.key.keysym.sym == SDLK_9

// SDL A-Z

#define A_KEY					e.key.keysym.sym == SDLK_a
#define A_KEY					e.key.keysym.sym == SDLK_a
#define B_KEY					e.key.keysym.sym == SDLK_b
#define C_KEY					e.key.keysym.sym == SDLK_c
#define D_KEY					e.key.keysym.sym == SDLK_d
#define E_KEY					e.key.keysym.sym == SDLK_e
#define F_KEY					e.key.keysym.sym == SDLK_f
#define G_KEY					e.key.keysym.sym == SDLK_g
#define H_KEY					e.key.keysym.sym == SDLK_h
#define I_KEY					e.key.keysym.sym == SDLK_i
#define J_KEY					e.key.keysym.sym == SDLK_j
#define K_KEY					e.key.keysym.sym == SDLK_k
#define L_KEY					e.key.keysym.sym == SDLK_l
#define M_KEY					e.key.keysym.sym == SDLK_m
#define N_KEY					e.key.keysym.sym == SDLK_n
#define O_KEY					e.key.keysym.sym == SDLK_o
#define P_KEY					e.key.keysym.sym == SDLK_p
#define Q_KEY					e.key.keysym.sym == SDLK_q
#define R_KEY					e.key.keysym.sym == SDLK_r
#define S_KEY					e.key.keysym.sym == SDLK_s
#define T_KEY					e.key.keysym.sym == SDLK_t
#define U_KEY					e.key.keysym.sym == SDLK_u
#define V_KEY					e.key.keysym.sym == SDLK_v
#define W_KEY					e.key.keysym.sym == SDLK_w
#define Z_KEY					e.key.keysym.sym == SDLK_z
#define X_KEY					e.key.keysym.sym == SDLK_x
#define Y_KEY					e.key.keysym.sym == SDLK_y

// SDL F-KEYS

#define F1_KEY				   e.key.keysym.sym == SDLK_F1
#define F2_KEY				   e.key.keysym.sym == SDLK_F2
#define F3_KEY				   e.key.keysym.sym == SDLK_F3
#define F4_KEY				   e.key.keysym.sym == SDLK_F4
#define F5_KEY				   e.key.keysym.sym == SDLK_F5
#define F6_KEY				   e.key.keysym.sym == SDLK_F6
#define F7_KEY				   e.key.keysym.sym == SDLK_F7
#define F8_KEY				   e.key.keysym.sym == SDLK_F8
#define F9_KEY				   e.key.keysym.sym == SDLK_F9
#define F10_KEY				e.key.keysym.sym == SDLK_F10
#define F11_KEY				e.key.keysym.sym == SDLK_F11
#define F12_KEY				e.key.keysym.sym == SDLK_F12

// SDL SCANCODES

const Uint8 *keystate = SDL_GetKeyboardState(NULL);

#define SC_ESCAPE		keystate[SDL_SCANCODE_ESCAPE]
#define SC_SPACE		keystate[SDL_SCANCODE_SPACE]
#define SC_RETURN		keystate[SDL_SCANCODE_RETURN]

#define SC_UP			keystate[SDL_SCANCODE_UP]
#define SC_DOWN		keystate[SDL_SCANCODE_DOWN]
#define SC_LEFT		keystate[SDL_SCANCODE_LEFT]
#define SC_RIGHT		keystate[SDL_SCANCODE_RIGHT]

#define SC_LCTRL		keystate[SDL_SCANCODE_LCTRL]
#define SC_LSHIFT		keystate[SDL_SCANCODE_LSHIFT]
#define SC_LALT		keystate[SDL_SCANCODE_LALT]

#define SC_RCTRL		keystate[SDL_SCANCODE_RCTRL]
#define SC_RSHIFT		keystate[SDL_SCANCODE_RSHIFT]
#define SC_RALT		keystate[SDL_SCANCODE_RALT]

#define SC_0			keystate[SDL_SCANCODE_0]
#define SC_1			keystate[SDL_SCANCODE_1]
#define SC_2			keystate[SDL_SCANCODE_2]
#define SC_3			keystate[SDL_SCANCODE_3]
#define SC_4			keystate[SDL_SCANCODE_4]
#define SC_5			keystate[SDL_SCANCODE_5]
#define SC_6			keystate[SDL_SCANCODE_6]
#define SC_7			keystate[SDL_SCANCODE_7]
#define SC_8			keystate[SDL_SCANCODE_8]
#define SC_9			keystate[SDL_SCANCODE_9]

#define SC_A			keystate[SDL_SCANCODE_A]
#define SC_B			keystate[SDL_SCANCODE_B]
#define SC_C			keystate[SDL_SCANCODE_C]
#define SC_D			keystate[SDL_SCANCODE_D]
#define SC_E			keystate[SDL_SCANCODE_E]
#define SC_F			keystate[SDL_SCANCODE_F]
#define SC_G			keystate[SDL_SCANCODE_G]
#define SC_H			keystate[SDL_SCANCODE_H]
#define SC_I			keystate[SDL_SCANCODE_I]
#define SC_J			keystate[SDL_SCANCODE_J]
#define SC_K			keystate[SDL_SCANCODE_K]
#define SC_L			keystate[SDL_SCANCODE_L]
#define SC_M			keystate[SDL_SCANCODE_M]
#define SC_N			keystate[SDL_SCANCODE_N]
#define SC_O			keystate[SDL_SCANCODE_O]
#define SC_P			keystate[SDL_SCANCODE_P]
#define SC_Q			keystate[SDL_SCANCODE_Q]
#define SC_R			keystate[SDL_SCANCODE_R]
#define SC_S			keystate[SDL_SCANCODE_S]
#define SC_T			keystate[SDL_SCANCODE_T]
#define SC_U			keystate[SDL_SCANCODE_U]
#define SC_V			keystate[SDL_SCANCODE_V]
#define SC_W			keystate[SDL_SCANCODE_W]
#define SC_X			keystate[SDL_SCANCODE_X]
#define SC_Y			keystate[SDL_SCANCODE_Y]
#define SC_Z			keystate[SDL_SCANCODE_Z]

////////////////////////////////////

#define log(a) 			printf("%i\n",a)
#define logn() 			printf("\n")

////////////////////////////////////

#define MX(a)           e.motion.x > a.x && e.motion.y > a.y && e.motion.x < a.w+a.x && e.motion.y < a.h+a.y
#define CC(a,b,c)       if(i == a && j == b){currentcolor = c;}

#define LOOPi(a)       	for(int i = 0; i < a; i++)
#define LOOPj(a)       	for(int j = 0; j < a; j++)

#define internal        static
#define local_persist   static
#define global_variable static

#endif // DEFINES_H

/*	
	if (e.type == SDL_WINDOWEVENT) {
	switch (e.window.event) {
	case SDL_WINDOWEVENT_SHOWN:       SDL_Log("Window %d shown", e.window.windowID);break;
	case SDL_WINDOWEVENT_HIDDEN:      SDL_Log("Window %d hidden", e.window.windowID);break;
	case SDL_WINDOWEVENT_EXPOSED:     SDL_Log("Window %d exposed", e.window.windowID);break;
	case SDL_WINDOWEVENT_MOVED:       SDL_Log("Window %d moved to %d,%d",e.window.windowID,e.window.data1,e.window.data2);break;
	case SDL_WINDOWEVENT_RESIZED:     SDL_Log("Window %d resized to %dx%d",e.window.windowID,e.window.data1,e.window.data2);break;
	case SDL_WINDOWEVENT_SIZE_CHANGED:SDL_Log("Window %d size changed to %dx%d",e.window.windowID, e.window.data1,e.window.data2);break;
	case SDL_WINDOWEVENT_MINIMIZED:   SDL_Log("Window %d minimized", e.window.windowID);break;
	case SDL_WINDOWEVENT_MAXIMIZED:   SDL_Log("Window %d maximized", e.window.windowID);break;
	case SDL_WINDOWEVENT_RESTORED:    SDL_Log("Window %d restored", e.window.windowID);break;
	case SDL_WINDOWEVENT_ENTER:       SDL_Log("Mouse entered window %d",e.window.windowID);break;
	case SDL_WINDOWEVENT_LEAVE:       SDL_Log("Mouse left window %d", e.window.windowID);break;
	case SDL_WINDOWEVENT_FOCUS_GAINED:SDL_Log("Window %d gained keyboard focus",e.window.windowID);break;
	case SDL_WINDOWEVENT_FOCUS_LOST:  SDL_Log("Window %d lost keyboard focus",e.window.windowID);break;
	case SDL_WINDOWEVENT_CLOSE:       SDL_Log("Window %d closed", e.window.windowID);break;
	#if SDL_VERSION_ATLEAST(2, 0, 5)
	case SDL_WINDOWEVENT_TAKE_FOCUS:  SDL_Log("Window %d is offered a focus", e.window.windowID);break;
	case SDL_WINDOWEVENT_HIT_TEST:    SDL_Log("Window %d has a special hit test", e.window.windowID);break;
	#endif
	default:SDL_Log("Window %d got unknown event %d",e.window.windowID, e.window.event);break;
	}
*/

/*
  SDL_HINT_ACCELEROMETER_AS_JOYSTICK
  SDL_HINT_ANDROID_APK_EXPANSION_MAIN_FILE_VERSION
  SDL_HINT_ANDROID_APK_EXPANSION_PATCH_FILE_VERSION
  SDL_HINT_ANDROID_SEPARATE_MOUSE_AND_TOUCH
  SDL_HINT_APPLE_TV_CONTROLLER_UI_EVENTS
  SDL_HINT_APPLE_TV_REMOTE_ALLOW_ROTATION
  SDL_HINT_BMP_SAVE_LEGACY_FORMAT
  SDL_HINT_EMSCRIPTEN_KEYBOARD_ELEMENT
  SDL_HINT_FRAMEBUFFER_ACCELERATION
  SDL_HINT_GAMECONTROLLERCONFIG
  SDL_HINT_GRAB_KEYBOARD
  SDL_HINT_IDLE_TIMER_DISABLED
  SDL_HINT_IME_INTERNAL_EDITING
  SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS
  SDL_HINT_MAC_BACKGROUND_APP
  SDL_HINT_MAC_CTRL_CLICK_EMULATE_RIGHT_CLICK
  SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH
  SDL_HINT_MOUSE_RELATIVE_MODE_WARP
  SDL_HINT_NO_SIGNAL_HANDLERS
  SDL_HINT_ORIENTATIONS
  SDL_HINT_RENDER_DIRECT3D11_DEBUG
  SDL_HINT_RENDER_DIRECT3D_THREADSAFE
  SDL_HINT_RENDER_DRIVER
  SDL_HINT_RENDER_OPENGL_SHADERS
  SDL_HINT_RENDER_SCALE_QUALITY
  SDL_HINT_RENDER_VSYNC
  SDL_HINT_RPI_VIDEO_LAYER
  SDL_HINT_THREAD_STACK_SIZE
  SDL_HINT_TIMER_RESOLUTION
  SDL_HINT_VIDEO_ALLOW_SCREENSAVER
  SDL_HINT_VIDEO_HIGHDPI_DISABLED
  SDL_HINT_VIDEO_MAC_FULLSCREEN_SPACES
  SDL_HINT_VIDEO_MINIMIZE_ON_FOCUS_LOSS
  SDL_HINT_VIDEO_WINDOW_SHARE_PIXEL_FORMAT
  SDL_HINT_VIDEO_WIN_D3DCOMPILER
  SDL_HINT_VIDEO_X11_NET_WM_PING
  SDL_HINT_VIDEO_X11_XINERAMA
  SDL_HINT_VIDEO_X11_XRANDR
  SDL_HINT_VIDEO_X11_XVIDMODE
  SDL_HINT_WINDOWS_DISABLE_THREAD_NAMING
  SDL_HINT_WINDOWS_ENABLE_MESSAGELOOP
  SDL_HINT_WINDOWS_NO_CLOSE_ON_ALT_F4
  SDL_HINT_WINDOW_FRAME_USABLE_WHILE_CURSOR_HIDDEN
  SDL_HINT_WINRT_HANDLE_BACK_BUTTON
  SDL_HINT_WINRT_PRIVACY_POLICY_LABEL
  SDL_HINT_WINRT_PRIVACY_POLICY_URL
  SDL_HINT_XINPUT_ENABLED
  SDL_HINT_XINPUT_USE_OLD_JOYSTICK_MAPPING
*/

/*
 
Values

Key Name
SDL_Scancode Value
SDL_Keycode Value
"0" SDL_SCANCODE_0 SDLK_0
"1" SDL_SCANCODE_1 SDLK_1
"2" SDL_SCANCODE_2 SDLK_2
"3" SDL_SCANCODE_3 SDLK_3
"4" SDL_SCANCODE_4 SDLK_4
"5" SDL_SCANCODE_5 SDLK_5
"6" SDL_SCANCODE_6 SDLK_6
"7" SDL_SCANCODE_7 SDLK_7
"8" SDL_SCANCODE_8 SDLK_8
"9" SDL_SCANCODE_9 SDLK_9
"A" SDL_SCANCODE_A SDLK_a
"AC Back" (the Back key (application control keypad))           SDL_SCANCODE_AC_BACK      SDLK_AC_BACK
"AC Bookmarks" (the Bookmarks key (application control keypad)) SDL_SCANCODE_AC_BOOKMARKS SDLK_AC_BOOKMARKS
"AC Forward" (the Forward key (application control keypad))     SDL_SCANCODE_AC_FORWARD   SDLK_AC_FORWARD
"AC Home" (the Home key (application control keypad))           SDL_SCANCODE_AC_HOME      SDLK_AC_HOME
"AC Refresh" (the Refresh key (application control keypad))     SDL_SCANCODE_AC_REFRESH   SDLK_AC_REFRESH
"AC Search" (the Search key (application control keypad))       SDL_SCANCODE_AC_SEARCH    SDLK_AC_SEARCH
"AC Stop" (the Stop key (application control keypad))           SDL_SCANCODE_AC_STOP      SDLK_AC_STOP
"Again" (the Again key (Redo))                                  SDL_SCANCODE_AGAIN        SDLK_AGAIN
"AltErase" (Erase-Eaze)                                         SDL_SCANCODE_ALTERASE     SDLK_ALTERASE
"'"                                                             SDL_SCANCODE_APOSTROPHE   SDLK_QUOTE
"Application" (the Application / Compose / Context Menu (Windows) key) SDL_SCANCODE_APPLICATION SDLK_APPLICATION
"AudioMute" (the Mute volume key)                               SDL_SCANCODE_AUDIOMUTE    SDLK_AUDIOMUTE
"AudioNext" (the Next Track media key)                          SDL_SCANCODE_AUDIONEXT    SDLK_AUDIONEXT
"AudioPlay" (the Play media key)                                SDL_SCANCODE_AUDIOPLAY SDLK_AUDIOPLAY
"AudioPrev" (the Previous Track media key)                      SDL_SCANCODE_AUDIOPREV SDLK_AUDIOPREV
"AudioStop" (the Stop media key)                                SDL_SCANCODE_AUDIOSTOP SDLK_AUDIOSTOP
"B"                                                             SDL_SCANCODE_B SDLK_b

"\" (Located at the lower left of the return key on ISO keyboards and at the right end of the QWERTY row on ANSI keyboards. Produces REVERSE SOLIDUS (backslash) and VERTICAL LINE in a US layout, REVERSE SOLIDUS and VERTICAL LINE in a UK Mac layout, NUMBER SIGN and TILDE in a UK Windows layout, DOLLAR SIGN and POUND SIGN in a Swiss German layout, NUMBER SIGN and APOSTROPHE in a German layout, GRAVE ACCENT and POUND SIGN in a French Mac layout, and ASTERISK and MICRO SIGN in a French Windows layout.) SDL_SCANCODE_BACKSLASH SDLK_BACKSLASH

"Backspace"                                    SDL_SCANCODE_BACKSPACE SDLK_BACKSPACE
"BrightnessDown" (the Brightness Down key)     SDL_SCANCODE_BRIGHTNESSDOWN SDLK_BRIGHTNESSDOWN
"BrightnessUp" (the Brightness Up key)         SDL_SCANCODE_BRIGHTNESSUP SDLK_BRIGHTNESSUP
"C"                                            SDL_SCANCODE_C SDLK_c
"Calculator" (the Calculator key)              SDL_SCANCODE_CALCULATOR SDLK_CALCULATOR
"Cancel"                                       SDL_SCANCODE_CANCEL SDLK_CANCEL
"CapsLock"                                     SDL_SCANCODE_CAPSLOCK SDLK_CAPSLOCK
"Clear"                                        SDL_SCANCODE_CLEAR SDLK_CLEAR
"Clear / Again"                                SDL_SCANCODE_CLEARAGAIN SDLK_CLEARAGAIN
","                                            SDL_SCANCODE_COMMA SDLK_COMMA
"Computer" (the My Computer key)               SDL_SCANCODE_COMPUTER SDLK_COMPUTER
"Copy"                                         SDL_SCANCODE_COPY SDLK_COPY
"CrSel"                                        SDL_SCANCODE_CRSEL SDLK_CRSEL 
"CurrencySubUnit" (the Currency Subunit key)   SDL_SCANCODE_CURRENCYSUBUNIT SDLK_CURRENCYSUBUNIT
"CurrencyUnit" (the Currency Unit key)         SDL_SCANCODE_CURRENCYUNIT SDLK_CURRENCYUNIT
"Cut"                                          SDL_SCANCODE_CUT SDLK_CUT
"D"                                            SDL_SCANCODE_D SDLK_d
"DecimalSeparator" (the Decimal Separator key) SDL_SCANCODE_DECIMALSEPARATOR SDLK_DECIMALSEPARATOR
"Delete"                                       SDL_SCANCODE_DELETE SDLK_DELETE
"DisplaySwitch" (display mirroring/dual display switch, video mode switch) SDL_SCANCODE_DISPLAYSWITCH SDLK_DISPLAYSWITCH
"Down" (the Down arrow key (navigation keypad)) SDL_SCANCODE_DOWN SDLK_DOWN
"E"                                            SDL_SCANCODE_E SDLK_e
"Eject" (the Eject key)                        SDL_SCANCODE_EJECT SDLK_EJECT
"End"                                          SDL_SCANCODE_END SDLK_END
"="                                            SDL_SCANCODE_EQUALS SDLK_EQUALS
"Escape" (the Esc key)                         SDL_SCANCODE_ESCAPE SDLK_ESCAPE
"Execute"                                      SDL_SCANCODE_EXECUTE SDLK_EXECUTE
"ExSel"                                        SDL_SCANCODE_EXSEL SDLK_EXSEL
"F"                                            SDL_SCANCODE_F SDLK_f
"F1"   SDL_SCANCODE_F1 SDLK_F1
"F10"  SDL_SCANCODE_F10 SDLK_F10
"F11"  SDL_SCANCODE_F11 SDLK_F11
"F12"  SDL_SCANCODE_F12 SDLK_F12
"F13"  SDL_SCANCODE_F13 SDLK_F13
"F14"  SDL_SCANCODE_F14 SDLK_F14
"F15"  SDL_SCANCODE_F15 SDLK_F15
"F16"  SDL_SCANCODE_F16 SDLK_F16
"F17"  SDL_SCANCODE_F17 SDLK_F17
"F18"  SDL_SCANCODE_F18 SDLK_F18
"F19"  SDL_SCANCODE_F19 SDLK_F19
"F2"   SDL_SCANCODE_F2 SDLK_F2
"F20"  SDL_SCANCODE_F20 SDLK_F20
"F21"  SDL_SCANCODE_F21 SDLK_F21
"F22"  SDL_SCANCODE_F22 SDLK_F22
"F23"  SDL_SCANCODE_F23 SDLK_F23
"F24"  SDL_SCANCODE_F24 SDLK_F24
"F3"   SDL_SCANCODE_F3 SDLK_F3
"F4"   SDL_SCANCODE_F4 SDLK_F4
"F5"   SDL_SCANCODE_F5 SDLK_F5
"F6"   SDL_SCANCODE_F6 SDLK_F6
"F7"   SDL_SCANCODE_F7 SDLK_F7
"F8"   SDL_SCANCODE_F8 SDLK_F8
"F9"   SDL_SCANCODE_F9 SDLK_F9
"Find" SDL_SCANCODE_FIND SDLK_FIND
"G"    SDL_SCANCODE_G SDLK_g

"`" (Located in the top left corner (on both ANSI and ISO keyboards). Produces GRAVE ACCENT and TILDE in a US Windows layout and in US and UK Mac layouts on ANSI keyboards, GRAVE ACCENT and NOT SIGN in a UK Windows layout, SECTION SIGN and PLUS-MINUS SIGN in US and UK Mac layouts on ISO keyboards, SECTION SIGN and DEGREE SIGN in a Swiss German layout (Mac: only on ISO keyboards), CIRCUMFLEX ACCENT and DEGREE SIGN in a German layout (Mac: only on ISO keyboards), SUPERSCRIPT TWO and TILDE in a French Windows layout, COMMERCIAL AT and NUMBER SIGN in a French Mac layout on ISO keyboards, and LESS-THAN SIGN and GREATER-THAN SIGN in a Swiss German, German, or French Mac layout on ANSI keyboards.) SDL_SCANCODE_GRAVE SDLK_BACKQUOTE

"H"    SDL_SCANCODE_H SDLK_h
"Help" SDL_SCANCODE_HELP SDLK_HELP
"Home" SDL_SCANCODE_HOME SDLK_HOME
"I"    SDL_SCANCODE_I SDLK_i

"Insert" (insert on PC, help on some Mac keyboards (but does send code 73, not 117)) SDL_SCANCODE_INSERT SDLK_INSERT
"J"    SDL_SCANCODE_J SDLK_j
"K"    SDL_SCANCODE_K SDLK_k

"KBDIllumDown" (the Keyboard Illumination Down key) SDL_SCANCODE_KBDILLUMDOWN SDLK_KBDILLUMDOWN
"KBDIllumToggle" (the Keyboard Illumination Toggle key) SDL_SCANCODE_KBDILLUMTOGGLE SDLK_KBDILLUMTOGGLE
"KBDIllumUp" (the Keyboard Illumination Up key) SDL_SCANCODE_KBDILLUMUP SDLK_KBDILLUMUP
"Keypad 0"   (the 0 key (numeric keypad)) SDL_SCANCODE_KP_0 SDLK_KP_0
"Keypad 00"  (the 00 key (numeric keypad)) SDL_SCANCODE_KP_00 SDLK_KP_00
"Keypad 000" (the 000 key (numeric keypad)) SDL_SCANCODE_KP_000 SDLK_KP_000
"Keypad 1"   (the 1 key (numeric keypad)) SDL_SCANCODE_KP_1 SDLK_KP_1
"Keypad 2"   (the 2 key (numeric keypad)) SDL_SCANCODE_KP_2 SDLK_KP_2
"Keypad 3"   (the 3 key (numeric keypad)) SDL_SCANCODE_KP_3 SDLK_KP_3
"Keypad 4"   (the 4 key (numeric keypad)) SDL_SCANCODE_KP_4 SDLK_KP_4
"Keypad 5"   (the 5 key (numeric keypad)) SDL_SCANCODE_KP_5 SDLK_KP_5
"Keypad 6"   (the 6 key (numeric keypad)) SDL_SCANCODE_KP_6 SDLK_KP_6
"Keypad 7"   (the 7 key (numeric keypad)) SDL_SCANCODE_KP_7 SDLK_KP_7
"Keypad 8"   (the 8 key (numeric keypad)) SDL_SCANCODE_KP_8 SDLK_KP_8
"Keypad 9"   (the 9 key (numeric keypad)) SDL_SCANCODE_KP_9 SDLK_KP_9
"Keypad A"   (the A key (numeric keypad)) SDL_SCANCODE_KP_A SDLK_KP_A
"Keypad &"   (the & key (numeric keypad)) SDL_SCANCODE_KP_AMPERSAND SDLK_KP_AMPERSAND
"Keypad @"   (the @ key (numeric keypad)) SDL_SCANCODE_KP_AT SDLK_KP_AT
"Keypad B"   (the B key (numeric keypad)) SDL_SCANCODE_KP_B SDLK_KP_B
"Keypad Backspace" (the Backspace key (numeric keypad)) SDL_SCANCODE_KP_BACKSPACE SDLK_KP_BACKSPACE
"Keypad Binary" (the Binary key (numeric keypad)) SDL_SCANCODE_KP_BINARY SDLK_KP_BINARY
"Keypad C"   (the C key (numeric keypad)) SDL_SCANCODE_KP_C SDLK_KP_C
"Keypad Clear" (the Clear key (numeric keypad)) SDL_SCANCODE_KP_CLEAR SDLK_KP_CLEAR
"Keypad ClearEntry" (the Clear Entry key (numeric keypad)) SDL_SCANCODE_KP_CLEARENTRY SDLK_KP_CLEARENTRY
"Keypad :"   (the : key (numeric keypad)) SDL_SCANCODE_KP_COLON SDLK_KP_COLON
"Keypad ,"   (the Comma key (numeric keypad)) SDL_SCANCODE_KP_COMMA SDLK_KP_COMMA
"Keypad D"   (the D key (numeric keypad)) SDL_SCANCODE_KP_D SDLK_KP_D
"Keypad &&"  (the && key (numeric keypad)) SDL_SCANCODE_KP_DBLAMPERSAND SDLK_KP_DBLAMPERSAND
"Keypad ||"  (the || key (numeric keypad)) SDL_SCANCODE_KP_DBLVERTICALBAR SDLK_KP_DBLVERTICALBAR
"Keypad Decimal" (the Decimal key (numeric keypad)) SDL_SCANCODE_KP_DECIMAL SDLK_KP_DECIMAL
"Keypad /" (the / key (numeric keypad)) SDL_SCANCODE_KP_DIVIDE SDLK_KP_DIVIDE
"Keypad E" (the E key (numeric keypad)) SDL_SCANCODE_KP_E SDLK_KP_E
"Keypad Enter" (the Enter key (numeric keypad)) SDL_SCANCODE_KP_ENTER SDLK_KP_ENTER
"Keypad =" (the = key (numeric keypad)) SDL_SCANCODE_KP_EQUALS SDLK_KP_EQUALS
"Keypad = (AS400)" (the Equals AS400 key (numeric keypad)) SDL_SCANCODE_KP_EQUALSAS400 SDLK_KP_EQUALSAS400
"Keypad !" (the ! key (numeric keypad)) SDL_SCANCODE_KP_EXCLAM SDLK_KP_EXCLAM
"Keypad F" (the F key (numeric keypad)) SDL_SCANCODE_KP_F SDLK_KP_F
"Keypad >" (the Greater key (numeric keypad)) SDL_SCANCODE_KP_GREATER SDLK_KP_GREATER
"Keypad #" (the # key (numeric keypad)) SDL_SCANCODE_KP_HASH SDLK_KP_HASH
"Keypad Hexadecimal" (the Hexadecimal key (numeric keypad)) SDL_SCANCODE_KP_HEXADECIMAL SDLK_KP_HEXADECIMAL
"Keypad {" (the Left Brace key (numeric keypad)) SDL_SCANCODE_KP_LEFTBRACE SDLK_KP_LEFTBRACE
"Keypad (" (the Left Parenthesis key (numeric keypad)) SDL_SCANCODE_KP_LEFTPAREN SDLK_KP_LEFTPAREN
"Keypad <" (the Less key (numeric keypad)) SDL_SCANCODE_KP_LESS SDLK_KP_LESS
"Keypad MemAdd" (the Mem Add key (numeric keypad)) SDL_SCANCODE_KP_MEMADD SDLK_KP_MEMADD
"Keypad MemClear" (the Mem Clear key (numeric keypad)) SDL_SCANCODE_KP_MEMCLEAR SDLK_KP_MEMCLEAR
"Keypad MemDivide" (the Mem Divide key (numeric keypad)) SDL_SCANCODE_KP_MEMDIVIDE SDLK_KP_MEMDIVIDE
"Keypad MemMultiply" (the Mem Multiply key (numeric keypad)) SDL_SCANCODE_KP_MEMMULTIPLY SDLK_KP_MEMMULTIPLY
"Keypad MemRecall" (the Mem Recall key (numeric keypad)) SDL_SCANCODE_KP_MEMRECALL SDLK_KP_MEMRECALL
"Keypad MemStore" (the Mem Store key (numeric keypad)) SDL_SCANCODE_KP_MEMSTORE SDLK_KP_MEMSTORE
"Keypad MemSubtract" (the Mem Subtract key (numeric keypad)) SDL_SCANCODE_KP_MEMSUBTRACT SDLK_KP_MEMSUBTRACT
"Keypad -" (the - key (numeric keypad)) SDL_SCANCODE_KP_MINUS SDLK_KP_MINUS
"Keypad *" (the * key (numeric keypad)) SDL_SCANCODE_KP_MULTIPLY SDLK_KP_MULTIPLY
"Keypad Octal" (the Octal key (numeric keypad)) SDL_SCANCODE_KP_OCTAL SDLK_KP_OCTAL
"Keypad %" (the Percent key (numeric keypad)) SDL_SCANCODE_KP_PERCENT SDLK_KP_PERCENT
"Keypad ." (the . key (numeric keypad)) SDL_SCANCODE_KP_PERIOD SDLK_KP_PERIOD
"Keypad +" (the + key (numeric keypad)) SDL_SCANCODE_KP_PLUS SDLK_KP_PLUS
"Keypad +/-" (the +/- key (numeric keypad)) SDL_SCANCODE_KP_PLUSMINUS SDLK_KP_PLUSMINUS
"Keypad ^" (the Power key (numeric keypad)) SDL_SCANCODE_KP_POWER SDLK_KP_POWER
"Keypad }" (the Right Brace key (numeric keypad))       SDL_SCANCODE_KP_RIGHTBRACE SDLK_KP_RIGHTBRACE
"Keypad )" (the Right Parenthesis key (numeric keypad)) SDL_SCANCODE_KP_RIGHTPAREN SDLK_KP_RIGHTPAREN
"Keypad Space" (the Space key (numeric keypad))         SDL_SCANCODE_KP_SPACE SDLK_KP_SPACE
"Keypad Tab" (the Tab key (numeric keypad))             SDL_SCANCODE_KP_TAB SDLK_KP_TAB
"Keypad |" (the | key (numeric keypad))                 SDL_SCANCODE_KP_VERTICALBAR SDLK_KP_VERTICALBAR
"Keypad XOR" (the XOR key (numeric keypad))             SDL_SCANCODE_KP_XOR SDLK_KP_XOR
"L"                                SDL_SCANCODE_L SDLK_l
"Left Alt" (alt, option)           SDL_SCANCODE_LALT SDLK_LALT
"Left Ctrl"                        SDL_SCANCODE_LCTRL SDLK_LCTRL
"Left" (the Left arrow key (navigation keypad)) SDL_SCANCODE_LEFT SDLK_LEFT
"["                                SDL_SCANCODE_LEFTBRACKET SDLK_LEFTBRACKET
"Left GUI" (windows, command (apple), meta) SDL_SCANCODE_LGUI SDLK_LGUI
"Left Shift"                         SDL_SCANCODE_LSHIFT SDLK_LSHIFT
"M"                                SDL_SCANCODE_M SDLK_m
"Mail" (the Mail/eMail key)        SDL_SCANCODE_MAIL SDLK_MAIL
"MediaSelect" (the Media Select key) SDL_SCANCODE_MEDIASELECT SDLK_MEDIASELECT
"Menu"                             SDL_SCANCODE_MENU SDLK_MENU
"-"                                SDL_SCANCODE_MINUS SDLK_MINUS
"ModeSwitch" (I'm not sure if this is really not covered by any of the above, but since there's a special KMOD_MODE for it I'm adding it here)                                       SDL_SCANCODE_MODE SDLK_MODE
"Mute"                             SDL_SCANCODE_MUTE SDLK_MUTE
"N"                                SDL_SCANCODE_N SDLK_n
"Numlock" (the Num Lock key (PC) / the Clear key (Mac)) SDL_SCANCODE_NUMLOCKCLEAR SDLK_NUMLOCKCLEAR
"O"                                SDL_SCANCODE_O SDLK_o
"Oper"                             SDL_SCANCODE_OPER SDLK_OPER
"Out"                              SDL_SCANCODE_OUT SDLK_OUT
"P"                                SDL_SCANCODE_P SDLK_p
"PageDown"                         SDL_SCANCODE_PAGEDOWN SDLK_PAGEDOWN
"PageUp"                           SDL_SCANCODE_PAGEUP SDLK_PAGEUP
"Paste"                            SDL_SCANCODE_PASTE SDLK_PASTE
"Pause" (the Pause / Break key)    SDL_SCANCODE_PAUSE SDLK_PAUSE
"."                                SDL_SCANCODE_PERIOD SDLK_PERIOD

"Power" (The USB document says this is a status flag, not a physical key - but some Mac keyboards do have a power key.) SDL_SCANCODE_POWER SDLK_POWER
"PrintScreen"                      SDL_SCANCODE_PRINTSCREEN SDLK_PRINTSCREEN
"Prior"                            SDL_SCANCODE_PRIOR SDLK_PRIOR
"Q"                                SDL_SCANCODE_Q SDLK_q
"R"                                SDL_SCANCODE_R SDLK_r
"Right Alt" (alt gr, option)             SDL_SCANCODE_RALT SDLK_RALT
"Right Ctrl"                             SDL_SCANCODE_RCTRL SDLK_RCTRL
"Return" (the Enter key (main keyboard)) SDL_SCANCODE_RETURN SDLK_RETURN
"Return"                                 SDL_SCANCODE_RETURN2 SDLK_RETURN2
"Right GUI" (windows, command (apple), meta)      SDL_SCANCODE_RGUI SDLK_RGUI
"Right" (the Right arrow key (navigation keypad)) SDL_SCANCODE_RIGHT SDLK_RIGHT
"]"                                SDL_SCANCODE_RIGHTBRACKET SDLK_RIGHTBRACKET
"Right Shift"                      SDL_SCANCODE_RSHIFT SDLK_RSHIFT
"S"                                SDL_SCANCODE_S SDLK_s
"ScrollLock"                       SDL_SCANCODE_SCROLLLOCK SDLK_SCROLLLOCK
"Select"                           SDL_SCANCODE_SELECT SDLK_SELECT
";"                                SDL_SCANCODE_SEMICOLON SDLK_SEMICOLON
"Separator"                        SDL_SCANCODE_SEPARATOR SDLK_SEPARATOR
"/"                                SDL_SCANCODE_SLASH SDLK_SLASH
"Sleep" (the Sleep key)            SDL_SCANCODE_SLEEP SDLK_SLEEP
"Space" (the Space Bar key(s))     SDL_SCANCODE_SPACE SDLK_SPACE
"Stop"                             SDL_SCANCODE_STOP SDLK_STOP
"SysReq" (the SysReq key)          SDL_SCANCODE_SYSREQ SDLK_SYSREQ
"T"                                SDL_SCANCODE_T SDLK_t
"Tab" (the Tab key)                SDL_SCANCODE_TAB SDLK_TAB
"ThousandsSeparator" (the Thousands Separator key) SDL_SCANCODE_THOUSANDSSEPARATOR SDLK_THOUSANDSSEPARATOR
"U"                                SDL_SCANCODE_U SDLK_u
"Undo"                             SDL_SCANCODE_UNDO SDLK_UNDO
"" (no name, empty string)         SDL_SCANCODE_UNKNOWN SDLK_UNKNOWN
"Up" (the Up arrow key (navigation keypad)) SDL_SCANCODE_UP SDLK_UP
"V"                                SDL_SCANCODE_V SDLK_v
"VolumeDown"                       SDL_SCANCODE_VOLUMEDOWN SDLK_VOLUMEDOWN
"VolumeUp"                         SDL_SCANCODE_VOLUMEUP SDLK_VOLUMEUP
"W"                                SDL_SCANCODE_W SDLK_w
"WWW" (the WWW/World Wide Web key) SDL_SCANCODE_WWW  SDLK_WWW
"X" SDL_SCANCODE_X SDLK_x
"Y" SDL_SCANCODE_Y SDLK_y
"Z" SDL_SCANCODE_Z SDLK_z

These physical keys do not have corresponding virtual key values
"" (no name, empty string; used on Asian keyboards, see footnotes in USB doc) SDL_SCANCODE_INTERNATIONAL1 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL2 (none)
"" (no name, empty string; Yen) SDL_SCANCODE_INTERNATIONAL3 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL4 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL5 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL6 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL7 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL8 (none)
"" (no name, empty string) SDL_SCANCODE_INTERNATIONAL9 (none)
"" (no name, empty string; Hangul/English toggle) SDL_SCANCODE_LANG1 (none)
"" (no name, empty string; Hanja conversion) SDL_SCANCODE_LANG2 (none)
"" (no name, empty string; Katakana) SDL_SCANCODE_LANG3 (none)
"" (no name, empty string; Hiragana) SDL_SCANCODE_LANG4 (none)
"" (no name, empty string; Zenkaku/Hankaku) SDL_SCANCODE_LANG5 (none)
"" (no name, empty string; reserved) SDL_SCANCODE_LANG6 (none)
"" (no name, empty string; reserved)
SDL_SCANCODE_LANG7
(none)
"" (no name, empty string; reserved)
SDL_SCANCODE_LANG8
(none)
"" (no name, empty string; reserved)
SDL_SCANCODE_LANG9           (none) "" (no name, empty string)
SDL_SCANCODE_LOCKINGCAPSLOCK (none) "" (no name, empty string)
SDL_SCANCODE_LOCKINGNUMLOCK  (none) "" (no name, empty string)

SDL_SCANCODE_LOCKINGSCROLLLOCK (none) "" (no name, empty string; This is the additional key that ISO keyboards have over ANSI ones, located between left shift and Y. Produces GRAVE ACCENT and TILDE in a US or UK Mac layout, REVERSE SOLIDUS (backslash) and VERTICAL LINE in a US or UK Windows layout, and LESS-THAN SIGN and GREATER-THAN SIGN in a Swiss German, German, or French layout.)

SDL_SCANCODE_NONUSBACKSLASH    (none) "#" (ISO USB keyboards actually use this code instead of 49 for the same key, but all OSes I've seen treat the two codes identically. So, as an implementor, unless your keyboard generates both of those codes and your OS treats them differently, you should generate SDL_SCANCODE_BACKSLASH instead of this code. As a user, you should not rely on this code because SDL will never generate it with most (all?) keyboards.)

SDL_SCANCODE_NONUSHASH (none) These virtual key values do not have corresponding physical keys
"&" (none) SDLK_AMPERSAND
"*" (none) SDLK_ASTERISK
"@" (none) SDLK_AT
"^" (none) SDLK_CARET
":" (none) SDLK_COLON
"$" (none) SDLK_DOLLAR
"!" (none) SDLK_EXCLAIM
">" (none) SDLK_GREATER
"#" (none) SDLK_HASH
"(" (none) SDLK_LEFTPAREN
"<" (none) SDLK_LESS
"%" (none) SDLK_PERCENT
"+" (none) SDLK_PLUS
"?" (none) SDLK_QUESTION
""" (none) SDLK_QUOTEDBL
")" (none) SDLK_RIGHTPAREN
"_" (none) SDLK_UNDERSCORE
 */


/*
//WINDOWS VK
VK_LBUTTON  0x01 Left mouse button
VK_RBUTTON  0x02 Right mouse button
VK_CANCEL   0x03 Control-break processing
VK_MBUTTON  0x04 Middle mouse button (three-button mouse)
VK_XBUTTON1 0x05 X1 mouse button
VK_XBUTTON2 0x06 X2 mouse button
-           0x07 Undefined
VK_BACK     0x08 BACKSPACE key
VK_TAB      0x09 TAB key
-           0x0A-0B Reserved
VK_CLEAR    0x0C CLEAR key
VK_RETURN   0x0D ENTER key
-           0x0E-0F Undefined
VK_SHIFT    0x10 SHIFT key
VK_CONTROL  0x11 CTRL key
VK_MENU     0x12 ALT key
VK_PAUSE    0x13 PAUSE key
VK_CAPITAL  0x14 CAPS LOCK key
VK_KANA     0x15 IME Kana mode
VK_HANGUEL  0x15 IME Hanguel mode (maintained for compatibility; use VK_HANGUL)
VK_HANGUL   0x15 IME Hangul mode
-           0x16 Undefined
VK_JUNJA    0x17 IME Junja mode
VK_FINAL    0x18 IME final mode
VK_HANJA    0x19 IME Hanja mode
VK_KANJI    0x19 IME Kanji mode
-           0x1A Undefined
VK_ESCAPE   0x1B ESC key
VK_CONVERT  0x1C IME convert
VK_NONCONVERT 0x1D IME nonconvert
VK_ACCEPT     0x1E IME accept
VK_MODECHANGE 0x1F IME mode change request
VK_SPACE    0x20 SPACEBAR
VK_PRIOR    0x21 PAGE UP key
VK_NEXT     0x22 PAGE DOWN key
VK_END      0x23 END key
VK_HOME     0x24 HOME key
VK_LEFT     0x25 LEFT ARROW key
VK_UP       0x26 UP ARROW key
VK_RIGHT    0x27 RIGHT ARROW key
VK_DOWN     0x28 DOWN ARROW key
VK_SELECT   0x29 SELECT key
VK_PRINT    0x2A PRINT key
VK_EXECUTE  0x2B EXECUTE key
VK_SNAPSHOT 0x2C PRINT SCREEN key
VK_INSERT   0x2D INS key
VK_DELETE   0x2E DEL key
VK_HELP     0x2F HELP key

            0x30 0 key
            0x31 1 key
            0x32 2 key
            0x33 3 key
            0x34 4 key
            0x35 5 key
            0x36 6 key
            0x37 7 key
            0x38 8 key
            0x39 9 key
-           0x3A-40 Undefined
0x41 A key
0x42 B key
0x43 C key
0x44 D key
0x45 E key
0x46 F key
0x47 G key
0x48 H key
0x49 I key
0x4A J key
0x4B K key
0x4C L key
0x4D M key
0x4E N key
0x4F O key
0x50 P key
0x51 Q key
0x52 R key
0x53 S key
0x54 T key
0x55 U key
0x56 V key
0x57 W key
0x58 X key
0x59 Y key
0x5A Z key

VK_LWIN 0x5B Left Windows key (Natural keyboard)
VK_RWIN 0x5C Right Windows key (Natural keyboard)
VK_APPS 0x5D Applications key (Natural keyboard)
-       0x5E Reserved
VK_SLEEP   0x5F Computer Sleep key
VK_NUMPAD0 0x60 Numeric keypad 0 key
VK_NUMPAD1 0x61 Numeric keypad 1 key
VK_NUMPAD2 0x62 Numeric keypad 2 key
VK_NUMPAD3 0x63 Numeric keypad 3 key
VK_NUMPAD4 0x64 Numeric keypad 4 key
VK_NUMPAD5 0x65 Numeric keypad 5 key
VK_NUMPAD6 0x66 Numeric keypad 6 key
VK_NUMPAD7 0x67 Numeric keypad 7 key
VK_NUMPAD8 0x68 Numeric keypad 8 key
VK_NUMPAD9 0x69 Numeric keypad 9 key
VK_MULTIPLY  0x6A Multiply key
VK_ADD       0x6B Add key
VK_SEPARATOR 0x6C Separator key
VK_SUBTRACT  0x6D Subtract key
VK_DECIMAL   0x6E Decimal key
VK_DIVIDE    0x6F Divide key
VK_F1 0x70 F1 key
VK_F2 0x71 F2 key
VK_F3 0x72 F3 key
VK_F4 0x73 F4 key
VK_F5 0x74 F5 key
VK_F6 0x75 F6 key
VK_F7 0x76 F7 key
VK_F8 0x77 F8 key
VK_F9 0x78 F9 key
VK_F10 0x79 F10 key
VK_F11 0x7A F11 key
VK_F12 0x7B F12 key
VK_F13 0x7C F13 key
VK_F14 0x7D F14 key
VK_F15 0x7E F15 key
VK_F16 0x7F F16 key
VK_F17 0x80 F17 key
VK_F18 0x81 F18 key
VK_F19 0x82 F19 key
VK_F20 0x83 F20 key
VK_F21 0x84 F21 key
VK_F22 0x85 F22 key
VK_F23 0x86 F23 key
VK_F24 0x87 F24 key
-           0x88-8F Unassigned
VK_NUMLOCK  0x90 NUM LOCK key
VK_SCROLL   0x91 SCROLL LOCK key

  0x92-96 OEM specific

-                      0x97-9F Unassigned
VK_LSHIFT              0xA0 Left SHIFT key
VK_RSHIFT              0xA1 Right SHIFT key
VK_LCONTROL            0xA2 Left CONTROL key
VK_RCONTROL            0xA3 Right CONTROL key
VK_LMENU               0xA4 Left MENU key
VK_RMENU               0xA5 Right MENU key
VK_BROWSER_BACK        0xA6 Browser Back key
VK_BROWSER_FORWARD     0xA7 Browser Forward key
VK_BROWSER_REFRESH     0xA8 Browser Refresh key
VK_BROWSER_STOP        0xA9 Browser Stop key
VK_BROWSER_SEARCH      0xAA Browser Search key
VK_BROWSER_FAVORITES   0xAB Browser Favorites key
VK_BROWSER_HOME        0xAC Browser Start and Home key
VK_VOLUME_MUTE         0xAD Volume Mute key
VK_VOLUME_DOWN         0xAE Volume Down key
VK_VOLUME_UP           0xAF Volume Up key
VK_MEDIA_NEXT_TRACK    0xB0 Next Track key
VK_MEDIA_PREV_TRACK    0xB1 Previous Track key
VK_MEDIA_STOP          0xB2 Stop Media key
VK_MEDIA_PLAY_PAUSE    0xB3 Play/Pause Media key
VK_LAUNCH_MAIL         0xB4 Start Mail key
VK_LAUNCH_MEDIA_SELECT 0xB5 Select Media key
VK_LAUNCH_APP1         0xB6 Start Application 1 key
VK_LAUNCH_APP2         0xB7 Start Application 2 key
-                      0xB8-B9 Reserved
VK_OEM_1               0xBA Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the ';:' key
VK_OEM_PLUS            0xBB For any country/region, the '+' key
VK_OEM_COMMA           0xBC For any country/region, the ',' key
VK_OEM_MINUS           0xBD    For any country/region, the '-' key
VK_OEM_PERIOD          0xBE    For any country/region, the '.' key
VK_OEM_2               0xBF    Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '/?' key
VK_OEM_3               0xC0    Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '`~' key
-                      0xC1-D7 Reserved
-                      0xD8-DA Unassigned
VK_OEM_4               0xDB Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '[{' key
VK_OEM_5               0xDC Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '\|' key

VK_OEM_6      0xDD Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the ']}' key
VK_OEM_7      0xDE Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the 'single-quote/double-quote' key

VK_OEM_8      0xDF Used for miscellaneous characters; it can vary by keyboard.
-             0xE0 Reserved
              0xE1 OEM specific
VK_OEM_102    0xE2 Either the angle bracket key or the backslash key on the RT 102-key keyboard
              0xE3-E4 OEM specific
VK_PROCESSKEY 0xE5 IME PROCESS key

              0xE6 OEM specific
VK_PACKET     0xE7 Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP
- 0xE8
Unassigned    0xE9-F5 OEM specific
VK_ATTN       0xF6 Attn key
VK_CRSEL      0xF7 CrSel key
VK_EXSEL      0xF8 ExSel key
VK_EREOF      0xF9 Erase EOF key
VK_PLAY       0xFA Play key
VK_ZOOM       0xFB Zoom key
VK_NONAME     0xFC Reserved
VK_PA1        0xFD PA1 key
VK_OEM_CLEAR  0xFE Clear key

 */
