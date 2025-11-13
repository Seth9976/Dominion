// 函数: sub_567690
// 地址: 0x567690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = __chkstk(0x1914)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_573400()
void* esi = *(eax_2 + 4)
int32_t edi = *(eax_2 + 0xc)
uint32_t eax_3 = sub_576b30(eax_2, edi, esi, 0x19, 0, 0, 0)

if (eax_3 s> 0)
    eax_3 = edi * 0x5a30
    
    if (*(eax_3 + esi + 0x17530) s>= 3)
        *(ecx + 0xc80) = 0

uint32_t result
int32_t ecx_3
result, ecx_3 = sub_576b30(eax_3, edi, esi, 0x18, 0, 0, 0)

if (result s> 0)
    void var_190c
    void* var_14_2 = &var_190c
    void var_c8c
    uint32_t eax_5 = sub_586c00(&var_c8c, edi, esi, ecx_3, &var_c8c)
    int32_t edx_3 = *(ecx + 0xc80)
    uint32_t var_1910 = eax_5
    void var_1914
    void* var_14_3 = &var_1914
    int32_t var_18_3 = 0
    int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_6e60a10fd699e3a335e49565f8de86e7>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    uint32_t* var_34_1 = &var_1910
    void* var_30_1 = &var_190c
    int32_t** var_1c_3 = &var_40
    result = GSI1::OffForSym(&var_40, edx_3, ecx, var_40, esi, &var_c8c)
    *(ecx + 0xc80) = result

CookieCheckFunction(result)
return result
