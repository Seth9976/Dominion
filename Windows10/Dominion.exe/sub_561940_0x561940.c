// 函数: sub_561940
// 地址: 0x561940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$for_each@ABVparallel_policy@execution@std@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@3@V<lambda_94c0d120f9d91638febf7150249dd4cf>@@$0A@@std@@YAXABVparallel_policy@execution@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@0@1V<lambda_94c0d120f9d91638febf7150249dd4cf>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_165bb02efddfa739cde1f9af80a35b5c>,bool,enum CardID>::VTable
    * const var_40 = &std::_Func_impl_no_alloc<class <lambda_165bb02efddfa739cde1f9af80a35b5c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t edx
int32_t var_3c = edx
int32_t var_38 = 6
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_165bb02efddfa739cde1f9af80a35b5c>,bool,enum CardID>::VTable
    * const* var_1c = &var_40
void* var_18
int32_t* eax_3 = &var_18
int32_t var_8_1 = 0
int32_t ebx = *(arg1 + 0xc80)
int32_t* var_54 = &var_18
int32_t var_58 = 0
void var_80
var_18 = &var_80
int32_t var_5c = 0
var_8_1.b = 2

if (var_1c != 0)
    eax_3 = (*var_1c)->vFunc_0(&var_80)
    int32_t* var_5c_1 = eax_3

var_8_1.b = 0
int32_t result = GSI1::OffForSym(eax_3, ebx, arg1)
*(arg1 + 0xc80) = result

if (var_1c != 0)
    result = (*var_1c)->vFunc_4(var_1c != &var_40)

fsbase->NtTib.ExceptionList = ExceptionList
return result
