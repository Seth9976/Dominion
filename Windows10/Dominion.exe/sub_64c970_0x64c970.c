// 函数: sub_64c970
// 地址: 0x64c970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_getdcwd@_W@@YAPA_WHPA_WHHQBDH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_98 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t var_88 = 0
void var_80
memset(&var_80, 0, 0x68)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_9c)(void* arg1) = sub_64ca90
`eh vector constructor iterator'(&var_80, 0x34, 2, sub_64ca70)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_9c_1)(void* arg1) = sub_64ca90
int32_t var_8_1 = 0
int32_t var_18 = 0
var_88:4.d = 0
var_88.d = 2
int32_t xmm1
int32_t var_78 = xmm1
data_1724a90 = 2
data_1724a94 = 0
(0x1724a98, &var_80, 0x34, 2, sub_64cba0)
data_1724b00 = var_18
int32_t var_8_2 = 1
`eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_64ca90)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(&data_1724a90)
return &data_1724a90
