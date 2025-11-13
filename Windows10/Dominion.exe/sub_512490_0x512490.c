// 函数: sub_512490
// 地址: 0x512490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_5c[0xa]
int32_t var_34[0xa]
uint32_t eax_2 = sub_5122d0(&var_34, &var_5c)
uint32_t edi = eax_2
int32_t esi = 0

if (edi != 0)
    if (edi s> 0)
        do
            eax_2 = sub_512370(var_34[esi], var_5c[esi])
            esi += 1
        while (esi s< edi)
    
    CookieCheckFunction(eax_2)
    return eax_2

int32_t* eax_5

while (true)
    int32_t* var_98 = &std::_Func_impl_no_alloc<class <lambda_a54b1a274a6717ff638fd38f5ab2efe5>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_74_1 = &var_98
    int32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_50ad20(&var_98, 0, &data_cca794, var_98)
    sub_50a6a0(eax_4, edx_2, eax_4, 0, 0)
    int32_t var_64
    eax_5 = sub_5121c0(eax_4, &var_64)
    
    if (eax_5.b == 0)
        break
    
    uint32_t eax_6 = sub_512370(eax_4, var_64)
    esi += 1
    
    if (esi s>= 3)
        CookieCheckFunction(eax_6)
        return eax_6

sub_63b870(eax_5, &data_801800, "result", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x148d, "Surprise_CardMods")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
