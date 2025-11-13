// 函数: sub_6ae4e0
// 地址: 0x6ae4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_6b2ec0(arg1 + 0x38, arg2)
int32_t var_1c
char* ecx_1

if (*eax != 1)
    char const* const var_18_1 = "Dx11GraphicsInterface::LockIndexBuffer"
    var_1c = 0x13c
    ecx_1 = "bufferData->mBufferType == DX11BUFFER_INDEX"
else if (eax[1].b != 0)
    int32_t* eax_1 = *(arg1 + 8)
    int64_t var_10 = 0
    int32_t var_8_1 = 0
    eax = (*(*eax_1 + 0x38))(eax_1, eax[6], 0, 4, 0, &var_10)
    
    if (eax s>= 0)
        return var_10.d
    
    char const* const var_18_4 = "Dx11GraphicsInterface::LockIndexBuffer"
    var_1c = 0x141
    ecx_1 = "SUCCEEDED(hr)"
else
    char const* const var_18_2 = "Dx11GraphicsInterface::LockIndexBuffer"
    var_1c = 0x13d
    ecx_1 = "bufferData->mDynamic"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_1c, 
    "Dx11GraphicsInterface::LockIndexBuffer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
