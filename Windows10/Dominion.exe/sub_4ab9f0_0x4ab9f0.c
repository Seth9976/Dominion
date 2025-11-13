// 函数: sub_4ab9f0
// 地址: 0x4ab9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$function@$$A6A_NABI@Z@std@@QAE@ABV01@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4ab4a0(&var_14:3)
int32_t var_8_1 = 0
sub_4b8a50()
int32_t var_8_2 = 0xffffffff
sub_4ab510()
sub_4ab5b0(&var_14:3)
sub_4ab620()
int32_t ecx_2 = data_cc8dc0

if (ecx_2 != 0)
    sub_69cee0(ecx_2, data_1597d80)
    data_cc8dc0 = 0

int32_t ecx_3 = data_cc8dc4

if (ecx_3 != 0)
    sub_69cee0(ecx_3, data_1597d88)
    data_cc8dc4 = 0

int32_t eax_3 = data_cc8dc8

if (eax_3 != 0)
    int32_t var_8_3 = 1
    `eh vector vbase constructor iterator'(eax_3, 0x7868, 4, sub_4d6d10)
    int32_t var_8_4 = 0xffffffff
    sub_64c080(data_cc8dc8, 0x1e1b0)
    data_cc8dc8 = 0

int32_t ecx_5 = data_cc8dcc

if (ecx_5 != 0)
    sub_69cee0(ecx_5, data_1597db4)
    data_cc8dcc = 0

sub_4e9d90(&data_1597db8)
sub_4e9e80(&data_1597dc4)
sub_51e1b0(&data_1597dd0)
sub_51e1b0(&data_1597ddc)
sub_51e220(&data_1597e00)
sub_51e220(&data_1597e0c)
sub_51e1b0(&data_1597e18)
sub_51e1b0(&data_1597de8)
int32_t result = sub_51e1b0(&data_1597df4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
