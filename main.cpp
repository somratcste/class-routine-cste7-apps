#include <windows.h>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
char szClassName[ ] = "CodeBlocksWindowsApp";

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = GetSysColorBrush(COLOR_3DDKSHADOW);

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           "Class-routine for CSTE-7th batch",       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           600,                 /* The programs width */
           400,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd,nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
        case WM_CREATE :
           CreateWindow(TEXT("button"), TEXT("Sunday"),
            WS_VISIBLE | WS_CHILD,
            30,170, 120,30,
            hwnd, (HMENU) 1, NULL, NULL
            ) ;
            CreateWindow(TEXT("button"), TEXT("Monday"),
            WS_VISIBLE | WS_CHILD,
            150, 100, 120,30,
            hwnd, (HMENU) 2, NULL, NULL
            ) ;
             CreateWindow(TEXT("button"), TEXT("Tuesday"),
            WS_VISIBLE | WS_CHILD,
            300, 100, 120,30,
            hwnd, (HMENU) 3, NULL, NULL
            ) ;
            CreateWindow(TEXT("button"), TEXT("Wednesday"),
            WS_VISIBLE | WS_CHILD,
            430, 180, 120,30,
            hwnd, (HMENU) 4, NULL, NULL
            ) ;
            CreateWindow(TEXT("button"), TEXT("Thrusday"),
            WS_VISIBLE | WS_CHILD,
            300, 250, 120,30,
            hwnd, (HMENU) 5, NULL, NULL
            ) ;
            CreateWindow(TEXT("button"), TEXT("Friday & Saturday"),
            WS_VISIBLE | WS_CHILD,
            150, 250, 120,30,
            hwnd, (HMENU) 6, NULL, NULL
            ) ;
           


        break;
        case WM_COMMAND :
        if(LOWORD(wParam)==1){
        MessageBox(hwnd, "Time\t\tCourse Title\t\tTeacher's Name\n\n\n8-8.50a.m.\t\tNumerical Analysis\t\tMd. Kamal Uddin\n11-11.50a.m.\tDigital Logic Design\t\tIbrahim Azad\n12-12.50p.m.\tPrinciples of Economics\tMd. Bellal Hossain\n\n", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        
        if(LOWORD(wParam)==2){
        MessageBox(hwnd, "Time\t\tCourse Title\t\tTeacher's Name\n\n\n10-10.50a.m.\tOOP\t\t\tMd. Kamal Uddin\n11-12.50p.m.\tOOP_Lab\t\t\tMd. Kamal Uddin\n2-2.50p.m.\tInt. to Telecommunication\tAbul kalam Azad\n3-3.50p.m.\tDigital Logic Design\t\tIbrahim Azad\n4-4.50p.m.\tNumerical Analysis\t\tMd. Kamal Uddin\n", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        
        if(LOWORD(wParam)==3){
        MessageBox(hwnd, "Time\t\tCourse Title\t\tTeacher's Name\n\n\n9-10.50a.m.\tOOP\t\t\tMd. Kamal Uddin\n11-11.50a.m.\tEconomics\t\tMd. Bellal Hossain\n12-12.50p.m.\tMath\t\t\tTBA\n2-2.50p.m.\tTelecommunicaion\t\tAbul Kalam Azad\n3-3.50p.m.\tDigital Logic Design\t\tIbrahim Azad\n4-4.50p.m.\tNumerical Analysis\t\tMd. Kamal Uddin\n", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==4){
        MessageBox(hwnd, "Time\t\tCourse Title\t\tTeacher's Name\n\n\n9-9.50a.m.\t\tTelecommunication\t\tAbul Kalam Azad\n10-11.50a.m.\tMath\t\t\tTBA\n12-12.50p.m.\tPrinciples of Economics\tMd. Bellal Hossain\n\n", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==5){
        MessageBox(hwnd, "Time\t\tCourse Title\t\tTeacher's Name\n\n\n9-10.50a.m.\tDLD_Lab(Gr-A)\t\t\n11-12.50a.m.\tDLD_Lab(Gr-B)", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==6){
        MessageBox(hwnd, "Versity Holiday ! This two days is only preservation for you.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==1){
        MessageBox(hwnd, "Thank you-Goodbye.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==2){
        MessageBox(hwnd, "Thank you-Goodbye.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==3){
        MessageBox(hwnd, "Thank you-Goodbye.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==4){
        MessageBox(hwnd, "Thank you-Goodbye.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==5){
        MessageBox(hwnd, "Thank you-Goodbye.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }
        if(LOWORD(wParam)==6){
        MessageBox(hwnd, "Thank you-Goodbye.", "SOMRAT", MB_OK | MB_ICONEXCLAMATION);
        }







        break;
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}
