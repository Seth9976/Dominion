// 函数: sub_6c69b0
// 地址: 0x6c69b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

PWSTR lpCmdLine = GetCommandLineW()
int32_t numArgs
PWSTR* eax = CommandLineToArgvW(lpCmdLine, &numArgs)
int32_t numArgs_1 = numArgs
data_147b074 = 2
int32_t eax_1 = sub_6c66c0(eax, numArgs_1, eax, u"-opengl")

if (eax_1.b != 0)
    data_147b074 = 1

if (sub_6c66c0(eax_1, numArgs_1, eax, u"-dx11") != 0)
    data_147b074 = 2

void* eax_3 = data_147ac2c
void** ebx = &data_8db4e0
data_cf65b8 = &data_8db4e0
data_8db4e4 = "Dominion.xpack"
data_8db4e8 = "Dominion"
data_8db4ec = "Dominion"
data_8db505 = 0x101
data_8db501 = 1
data_8db50a = 1
data_8db4f0 = "Dominion.Steam.3315"

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "gpAssetAppData", "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x36, 
        "AssetCatalogSetLabelsToElide")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(eax_3 + 0x20) = &data_cb44b8
*(eax_3 + 0x24) = 0
int32_t numArgs_2 = numArgs
data_8db510 = 0
int32_t eax_4 = sub_6c66c0(eax_3, numArgs_2, eax, u"-widescreen")

if (eax_4.b != 0)
    data_8db4f4 = 0x780
    data_8db4f8 = 0x438

uint32_t eax_5 = sub_6c66c0(eax_4, numArgs_2, eax, 0x87e3a8)

if (eax_5.b != 0)
    eax_5 = sub_63b5f0("VR enabled")
    ebx = data_cf65b8
    ebx[0xa].b = 1
    numArgs_2 = numArgs

uint32_t eax_6 = sub_6c66c0(eax_5, numArgs_2, eax, u"-novr")

if (eax_6.b != 0)
    eax_6 = sub_63b5f0("VR disabled")
    ebx = data_cf65b8
    ebx[0xa].b = 0
    numArgs_2 = numArgs

uint32_t eax_7 = sub_6c66c0(eax_6, numArgs_2, eax, u"-hasDB")

if (eax_7.b != 0)
    eax_7 = sub_63b5f0("Has db")
    ebx = data_cf65b8
    ebx[0xb].b = 1
    numArgs_2 = numArgs

int32_t eax_8 = sub_6c66c0(eax_7, numArgs_2, eax, u"build_emscripten_assets")

if (eax_8.b != 0)
    ebx[0xa].b = 0
    numArgs_2 = numArgs
else
    eax_8 = sub_6c66c0(eax_8, numArgs_2, eax, u"build_assets")
    
    if (eax_8.b != 0)
        ebx[0xa].b = 0
        numArgs_2 = numArgs
    else
        eax_8 = sub_6c66c0(eax_8, numArgs_2, eax, u"build_xpack")
        
        if (eax_8.b != 0)
            ebx[0xa].b = 0
            numArgs_2 = numArgs

int32_t eax_9 = sub_6c66c0(eax_8, numArgs_2, eax, u"-server")

if (eax_9.b != 0)
    ebx[0xc].b = 1
    numArgs_2 = numArgs

if (ebx[0xa].b != 0)
    data_147d2c4 = 1
    int32_t eax_10 = sub_6c66c0(eax_9, numArgs_2, eax, u"-oculus")
    
    if (eax_10.b != 0)
        data_147d2c4 = 3
    
    if (sub_6c66c0(eax_10, numArgs_2, eax, u"-openvr") != 0)
        data_147d2c4 = 5

sub_6c64a0()
HLOCAL hMem = sub_63ee40()
PWSTR lpCmdLine_1 = lpCmdLine
int32_t eax_12 = sub_63b7f0("command line: %S")
int32_t numArgs_3 = numArgs
int32_t eax_13 = sub_6c66c0(eax_12, numArgs_3, hMem, u"build_emscripten_assets")

if (eax_13.b == 0)
    int32_t eax_15 = sub_6c66c0(eax_13, numArgs_3, hMem, u"build_assets")
    
    if (eax_15.b != 0)
        sub_4f7f30("building assets...\n")
        goto label_6c6c45
    
    if (sub_6c66c0(eax_15, numArgs_3, hMem, u"build_xpack") == 0)
        LocalFree(hMem)
        HWND hWnd = sub_6c6730(arg1)
        
        if (hWnd != 0)
            int32_t* ecx_16 = data_147abec
            HWND hWnd_1 = hWnd
            data_cc8ddf = 1
            data_147b084 = hWnd_1
            
            if (ecx_16 != 0)
                (*(*ecx_16 + 0xc))()
                hWnd_1 = data_147b084
                data_147d2d8 = 0
            
            int32_t* ecx_17 = data_147b070
            
            if (ecx_17 != 0)
                (*(*ecx_17 + 8))(hWnd_1)
            
            void* eax_19 = data_cf65b8
            enum SHOW_WINDOW_CMD nCmdShow = arg2
            
            if (*(eax_19 + 0x23) != 0 && *(eax_19 + 0x24) == 0)
                nCmdShow = SW_SHOWMAXIMIZED
            
            ShowWindow(hWnd, nCmdShow)
            UpdateWindow(hWnd)
            int32_t* ecx_18 = data_cf65b8
            
            if (ecx_18[0xc].b == 0)
                SetTimer(nullptr, 1, 0xa, j_sub_640520)
                ecx_18 = data_cf65b8
            
            (*(*ecx_18 + 0xc))()
            return 1
    else
        sub_4f7f30("building assets...\n")
        data_cc8d6f = 1
        sub_6c93a0()
        sub_6ee270()
        sub_4f7f30("Done!\n")
else
    sub_4f7f30("building emscripten assets...\n")
    data_cc8ddc = 1
label_6c6c45:
    data_cc8d6f = 1
    sub_6c93a0()
    sub_73a7b0()
    sub_4f7f30("Done!\n")

return 0
