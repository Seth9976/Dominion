// 函数: sub_6ff230
// 地址: 0x6ff230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg1 + 0x424c) != 0)
    sub_7069b0(arg1 + 0x424c)
    int32_t eax = *(arg1 + 0x424c)
    
    if (eax != 0)
        _aligned_free(eax)
    
    __builtin_memset(arg1 + 0x424c, 0, 0x14)
    *(arg1 + 0x4264) = 0

if (*(arg1 + 4) != 0)
    wglMakeCurrent(nullptr, nullptr)
    wglDeleteContext(*(arg1 + 4))
    HDC hDC = *(arg1 + 8)
    *(arg1 + 4) = 0
    ReleaseDC(*(arg1 + 0xc), hDC)
    *(arg1 + 8) = 0

int32_t* ecx_1 = data_147ded4

if (ecx_1 != 0)
    sub_64c080(ecx_1, 0x5048)
    data_147ded4 = 0
