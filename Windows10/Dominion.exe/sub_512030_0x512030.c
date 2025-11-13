// 函数: sub_512030
// 地址: 0x512030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx_2 = data_cca780 + 0xc + (data_cca784 << 0xb)
int32_t i_4 = 0
int32_t ecx_1
ecx_1.b = 0
int32_t var_38 = ebx_2
uint32_t eax_2 = sub_511ed0(ecx_1.b)
uint32_t ecx_2 = eax_2
int32_t i = 0
uint32_t var_34 = ecx_2
int32_t var_30[0xa]

do
    int32_t ebx_3 = *(ebx_2 + (i << 2))
    
    if (ebx_3 == 0)
        break
    
    eax_2 = sub_511d80(ecx_2, ebx_3)
    
    if (eax_2.b != 0)
        var_30[i_4] = ebx_3
        i_4 += 1
    
    ecx_2 = var_34
    i += 1
    ebx_2 = var_38
while (i s< 0xa)

int32_t i_1 = i_4
bool cond:0 = i_4 == 3

if (i_4 s< 3)
    do
        uint32_t var_70_1 = ecx_2
        int32_t* var_74 = &std::_Func_impl_no_alloc<class <lambda_7dd72415c646a5830f0efc985c82ffcd>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
        int32_t** var_50_1 = &var_74
        int32_t edx_2
        eax_2, ecx_2, edx_2 = sub_50ad20(&var_74, 0, &data_cca794, var_74)
        uint32_t ebx_4 = eax_2
        
        if (ebx_4 == 0)
            break
        
        eax_2 = sub_50a6a0(eax_2, edx_2, ebx_4, 0, 0)
        
        if (eax_2.b != 0)
            var_30[i_4] = ebx_4
            i_4 += 1
        else
            i_1 -= 1
        
        ecx_2 = var_34
        i_1 += 1
    while (i_1 s< 3)
    
    cond:0 = i_4 == 3

if (not(cond:0))
    ecx_2.b = 1
    i_4 = 0
    eax_2 = sub_511ed0(ecx_2.b)
    var_34 = eax_2
    
    for (int32_t i_2 = 0; i_2 s< 0xa; i_2 += 1)
        int32_t ebx_5 = *(var_38 + (i_2 << 2))
        
        if (ebx_5 == 0)
            break
        
        if (sub_511d80(eax_2, ebx_5) != 0)
            var_30[i_4] = ebx_5
            i_4 += 1
        
        eax_2 = var_34

int32_t var_54_2
char const* const var_50_3
char* ecx_6

if (var_34 != 0)
    if (i_4 s>= 3)
        int32_t* result
        int32_t ecx_7
        result, ecx_7 = sub_63eda0(eax_2, &var_30, &data_cc8de0, i_4, 3)
        
        for (int32_t i_3 = 0; i_3 s< 3; i_3 += 1)
            int32_t var_50_5 = 0
            result, ecx_7 = sub_50ac80(result, var_30[i_3], var_34, ecx_7, 0)
        
        CookieCheckFunction(result)
        return result
    
    var_50_3 = "Surprise_Stamps"
    var_54_2 = 0x1419
    ecx_6 = "numPiles >= numNeededPiles"
else
    var_50_3 = "Surprise_Stamps"
    var_54_2 = 0x1418
    ecx_6 = "stamp != CPIECE_NONE"

sub_63b870(eax_2, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_54_2, var_50_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
