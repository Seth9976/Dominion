// 函数: sub_6ae430
// 地址: 0x6ae430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_6b2ec0(arg1 + 0x38, arg2)
int32_t* esi = eax
int32_t var_20
char* ecx_1

if (*esi != 0)
    char const* const var_1c_1 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
    var_20 = 0x12f
    ecx_1 = "bufferData->mBufferType == DX11BUFFER_VERTEX"
else if (esi[1].b != 0)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t var_8_1 = 0
    int64_t var_10 = 0
    eax = (*(*eax_1 + 0x38))(eax_1, esi[6], 0, 5, 0, &var_10)
    
    if (eax s>= 0)
        return esi[3] + var_10.d
    
    char const* const var_1c_4 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
    var_20 = 0x134
    ecx_1 = "SUCCEEDED(hr)"
else
    char const* const var_1c_2 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
    var_20 = 0x130
    ecx_1 = "bufferData->mDynamic"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_20, 
    "Dx11GraphicsInterface::LockAppendVertexBuffer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
