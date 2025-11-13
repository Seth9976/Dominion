// 函数: sub_4abd60
// 地址: 0x4abd60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76263d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm0 = sub_4acb60(&__saved_ebp, 0.261799395f)
void* eax_3 = data_cf65b8
data_19e3be0 = xmm0
data_19e3be8 = 0x3dcccccd
data_19e3bec = 0x40400000
data_19e3c10 = 0
data_19e3c14 = 0x40400000
uint128_t xmm1 = zx.o(*(eax_3 + 0x18))
float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
int32_t var_18 = 0xbf800000
float xmm1_2 = _mm_cvtepi32_ps(xmm1) / xmm0_2
int128_t xmm0_3 = data_bf21e8
data_19e3be4 = xmm1_2
data_19e3bf0 = xmm0_3
data_19e3c00 = data_bf21f8
data_19e3c00:0xc = 0x40400000
float var_20 = -0f
int32_t var_1c = 0x80000000
void var_34
data_19e3bf0:4.o = *sub_4ac9c0(&var_34, &data_7fef98, &var_20, &var_34)
uint32_t eax_6 = sub_646220(&data_19e3be0)

if (data_147aba1 == 0)
    sub_63b870(eax_6, &data_801800, "gDraw3DData.submittingRenderItems", 
        "C:\x\ax2017\Engine\Draw3d.cpp", 0x30c, "Draw3DOverlayColor")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

data_cf6a80 = data_891360
data_cf6a6c = 1
data_cf65f8 = 0xff000000
void var_21
sub_4ab4a0(&var_21)
int32_t var_8_1 = 0
sub_4b7bc0()
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4ab510()
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
