// 函数: sub_6ff2e0
// 地址: 0x6ff2e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_128
int32_t var_14 = __security_cookie ^ &var_128
int32_t esi
int32_t var_12c = esi
int32_t edi
int32_t var_130 = edi
uint8_t* var_120 = arg1
uint32_t params_4 = sub_63b5f0("OpenGLInterface::GraphicsInterfaceAttach")
int32_t var_138
char const* const ecx

if (*(arg1 + 0x425c) == 0)
    int128_t xmm0_1 = data_7ff010
    *(arg1 + 0x4268) = 0
    arg1[0x426c] = 0
    *(arg1 + 0x423c) = xmm0_1
    memset(&arg1[0x28], 0xfe, 0x4000)
    int32_t ecx_1
    int32_t edi_3
    edi_3, ecx_1 = __memfill_u32(data_147ded4 + 0x4028, 0xbaadf00d, 0x85)
    *(arg1 + 0xc) = arg2
    *(arg1 + 8) = GetDC(arg2)
    HMODULE hInstance = GetModuleHandleA(nullptr)
    WNDCLASSW wndClass
    wndClass.lpszMenuName = 0
    wndClass.cbClsExtra = 0
    wndClass.cbWndExtra = 0
    wndClass.hIcon = 0
    wndClass.hCursor = 0
    wndClass.lpfnWndProc = DefWindowProcA
    wndClass.hInstance = hInstance
    wndClass.hbrBackground = 1
    wndClass.lpszClassName = u"oglversionchecksample"
    wndClass.style = 0x20
    RegisterClassW(&wndClass)
    HWND hWnd = CreateWindowExW(WS_EX_LEFT, wndClass.lpszClassName, openglversioncheck", 
        WS_TILEDWINDOW, 0, 0, 0x280, 0x1e0, nullptr, nullptr, hInstance, nullptr)
    PIXELFORMATDESCRIPTOR ppfd_1
    __builtin_memset(&ppfd_1, 0, 0x28)
    ppfd_1.nSize = 0x28
    ppfd_1.nVersion = 1
    ppfd_1.dwFlags = 0x1025
    ppfd_1.iPixelType = 0
    ppfd_1.cColorBits = 0x20
    HDC hDC_2 = GetDC(hWnd)
    HDC hDC = hDC_2
    SetPixelFormat(hDC_2, ChoosePixelFormat(hDC_2, &ppfd_1), &ppfd_1)
    HGLRC eax_6 = wglCreateContext(hDC_2)
    wglMakeCurrent(hDC_2, eax_6)
    int32_t eax_7 = _glewInit@0()
    
    if (eax_7 != 0)
        sub_63b870(eax_7, &data_801800, "initResult == GLEW_OK", 
            "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x43e, "CreateDummyWindowToInitGlew")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    wglMakeCurrent(eax_7, eax_7)
    wglDeleteContext(eax_6)
    ReleaseDC(hWnd, hDC)
    DestroyWindow(hWnd)
    void* eax_8 = data_cf65b8
    uint8_t* edi_5 = var_120
    PIXELFORMATDESCRIPTOR ppfd
    __builtin_memset(&ppfd, 0, 0x28)
    eax_8.b = *(eax_8 + 0x20)
    HDC hdc = *(edi_5 + 8)
    char temp1_1 = eax_8.b
    eax_8.b = neg.b(eax_8.b)
    eax_8.b = sbb.b(eax_8.b, eax_8.b, temp1_1 != 0)
    eax_8.b &= 0x10
    ppfd.nSize = 0x28
    ppfd.nVersion = 1
    ppfd.cDepthBits = eax_8.b
    ppfd.dwFlags = 0x1025
    ppfd.iPixelType = 0
    ppfd.cColorBits = 0x20
    BOOL format_1 = ChoosePixelFormat(hdc, &ppfd)
    HDC format = format_1
    int32_t var_138_8
    char* ecx_2
    
    if ((ppfd.dwFlags & 0x1000) == 0)
        char const* const var_134_13 = "OpenGLWin32SetPixelFormat"
        var_138_8 = 0x478
        ecx_2 = "pfd.dwFlags & PFD_GENERIC_ACCELERATED"
    label_6ff7dc:
        sub_63b870(format_1, &data_801800, ecx_2, "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 
            var_138_8, "OpenGLWin32SetPixelFormat")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_3 = *(data_cf65b8 + 0x1c)
    
    if (ecx_3 != 0)
        uint32_t cDepthBits = zx.d(ppfd.cDepthBits)
        int32_t var_110 = 0
        int32_t var_10c_1 = 0
        int128_t var_70
        __builtin_memcpy(&var_70, 
            "\x01\x20\x00\x00\x01\x00\x00\x00\x10\x20\x00\x00\x01\x00\x00\x00\x03\x20\x00\x00\x27\x20\x"
        "00\x00\x14\x20\x00\x00\x18\x00\x00\x00\x1b\x20\x00\x00\x08\x00\x00\x00\x22\x20\x00\x
                00", 
            0x2c)
        int32_t eax_11 = *__wglewChoosePixelFormatARB
        int128_t var_40
        __builtin_memcpy(&var_40, 
            "\x23\x20\x00\x00\x00\x00\x00\x00\x11\x20\x00\x00\x01\x00\x00\x00\x41\x20\x00\x00\x01\x00\x"
        "00\x00\x42\x20\x00\x00", 
            0x1c)
        int32_t var_24_1 = ecx_3
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        
        if (eax_11(hdc, &var_70, &var_110, 1, &hDC, &var_120) != 0 && var_120 u>= 1)
            format = hDC
    
    format_1 = SetPixelFormat(hdc, format, &ppfd)
    
    if (format_1 == 0)
        char const* const var_134_25 = "OpenGLWin32SetPixelFormat"
        var_138_8 = 0x49b
        ecx_2 = "result"
        goto label_6ff7dc
    
    *(edi_5 + 4) = wglCreateContext(*(edi_5 + 8))
    RECT rect
    GetClientRect(*(edi_5 + 0xc), &rect)
    uint128_t bottom = zx.o(rect.bottom)
    int32_t xmm0_3 = _mm_cvtepi32_ps(zx.o(rect.right))
    int32_t xmm1_1 = _mm_cvtepi32_ps(bottom)
    *(edi_5 + 0x10) = xmm0_3
    *(edi_5 + 0x14) = xmm1_1
    params_4 = wglMakeCurrent(*(edi_5 + 8), *(edi_5 + 4))
    
    if (params_4 != 0)
        params_4 = _glewInit@0()
        
        if (params_4 == 0)
            int32_t params_1 = params_4
            int32_t params = params_4
            glGetIntegerv(0x821b, &params_1)
            glGetIntegerv(0x821c, &params)
            hDC = glGetString(0x1f02)
            uint8_t* eax_15 = glGetString(0x1f01)
            var_120 = eax_15
            
            if (strstr(eax_15, "Mali-T760") != 0)
                data_cd3194 = 1
            
            if (strstr(eax_15, "Adreno (TM) 420") != 0)
                void* eax_18 = data_cf65b8
                data_ccf6e7 = 1
                
                if (*(eax_18 + 0x1c) s> 2)
                    sub_63b5f0("Setting msaa to 2x for adreno")
                    *(data_cf65b8 + 0x1c) = 2
            
            glGetIntegerv(0xd33, &edi_5[0x5040])
            int32_t var_134_23 = *(edi_5 + 0x5040)
            uint8_t* var_138_15 = var_120
            int32_t params_3 = params
            int32_t params_2 = params_1
            HDC hDC_1 = hDC
            sub_63b5f0("GL version %s (%d.%d) %s (%d)")
            int32_t ecx_4
            ecx_4.b = *(data_cf65b8 + 0x27) != 0
            uint32_t result = (*__wglewSwapIntervalEXT)(ecx_4)
            CookieCheckFunction(result)
            return result
        
        char const* const var_134_26 = "OpenGLInterface::GraphicsInterfaceAttach"
        var_138 = 0x4c6
        ecx = "initResult == GLEW_OK"
    else
        char const* const var_134_19 = "OpenGLInterface::GraphicsInterfaceAttach"
        var_138 = 0x4c3
        ecx = "success"
else
    char const* const var_134 = "OpenGLInterface::GraphicsInterfaceAttach"
    var_138 = 0x4a3
    ecx = "mBufferDataArray.mUsedCount == 0"

sub_63b870(params_4, &data_801800, ecx, "C:\x\ax2017\Engine\OpenGLGraphics.cpp", var_138, 
    "OpenGLInterface::GraphicsInterfaceAttach")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
