// 函数: sub_63ca90
// 地址: 0x63ca90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c375
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** var_30 = arg1
*arg1 = &data_871d1c
int32_t var_14_1 = 0
arg1[3] = std::locale::_Init(1)
int32_t var_14_2 = 1
*(arg1 + 0x10) = zx.o(0)
arg1[8] = 0
arg1[9] = 0xf
arg1[4].b = 0
*(arg1 + 0x28) = zx.o(0)
arg1[0xe] = 0
arg1[0xf] = 7
arg1[0xa].w = 0
var_14_2.b = 3
arg1[0x12].w = 0
*(arg1 + 0x4a) = 0
void*** _Pfacet = operator new(0x34)
var_14_2.b = 4
std::codecvt<wchar_t, char, struct _Mbstatet>::codecvt<wchar_t, char, struct _Mbstatet>(_Pfacet, 0)
*_Pfacet = &data_871cf4
var_14_2.b = 3
class std::locale::_Locimp* _Right = arg1[3]
arg1[0x10] = 0
arg1[0x11] = 0
arg1[1] = _Pfacet
class std::locale::_Locimp* eax_4 = std::locale::_Locimp::_New_Locimp(_Right)
class std::locale::id* const eax_5 = std::codecvt<wchar_t, char, struct _Mbstatet>::id
class std::locale::id* const var_24 = std::codecvt<wchar_t, char, struct _Mbstatet>::id

if (*std::codecvt<wchar_t, char, struct _Mbstatet>::id == 0)
    class std::_Lockit var_28
    std::_Lockit::_Lockit(&var_28, 0)
    
    if (*var_24 == 0)
        *std::locale::id::_Id_cnt += 1
        *var_24 = *std::locale::id::_Id_cnt
    
    std::_Lockit::~_Lockit(&var_28)
    eax_5 = var_24

std::locale::_Locimp::_Addfac(eax_4, _Pfacet, *eax_5)
eax_4->_Catmask = 0
std::_Yarn<char>::operator=(&eax_4->_Name, U"*")
int32_t* ecx_6 = arg1[3]

if (ecx_6 != eax_4)
    int32_t* eax_9 = (*(*ecx_6 + 8))()
    
    if (eax_9 != 0)
        (**eax_9)(1)
    
    arg1[3] = eax_4
    eax_4->vtable->_Incref()

int32_t* eax_13 = eax_4->vtable->_Decref()

if (eax_13 != 0)
    (**eax_13)(1)

arg1[0x13] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
