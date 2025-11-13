// 函数: sub_6ae6a0
// 地址: 0x6ae6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg3
int32_t ebx
ebx.b = arg4
int64_t var_14 = 0
int32_t var_24 = eax_2
int32_t var_1c = 1
int32_t var_18 = 0
int32_t* esi_1

if (ebx.b != 0)
    esi_1 = nullptr
    int32_t var_20_1 = 2
    int32_t var_18_1 = 0x10000
    
    if (arg2 == 0)
        goto label_6ae726
    
    goto label_6ae718

int32_t var_48
char const* const ecx

if (arg2 != 0)
    int32_t var_20_2 = 0
label_6ae718:
    int64_t var_2c_1 = 0
    int32_t var_30
    esi_1 = &var_30
    var_30 = arg2
label_6ae726:
    int32_t* eax_3 = *(arg1 + 4)
    int32_t var_34
    eax_2 = (*(*eax_3 + 0xc))(eax_3, &var_24, esi_1, &var_34)
    
    if (eax_2 s>= 0)
        int32_t* eax_4 = sub_6b2e00(arg1 + 0x38)
        eax_4[6] = var_34
        eax_4[1].b = ebx.b
        *eax_4 = 0
        uint32_t result = eax_4[0x92]
        CookieCheckFunction(result)
        return result
    
    char const* const var_44_2 = "Dx11GraphicsInterface::CreateVertexBuffer"
    var_48 = 0x187
    ecx = "SUCCEEDED(hr)"
else
    char const* const var_44 = "Dx11GraphicsInterface::CreateVertexBuffer"
    var_48 = 0x176
    ecx = "pVerts"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_48, 
    "Dx11GraphicsInterface::CreateVertexBuffer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
