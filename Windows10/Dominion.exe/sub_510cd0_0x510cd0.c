// 函数: sub_510cd0
// 地址: 0x510cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t ebx = sub_56b780()
int32_t* eax_4 = *(eax_2 + 0x3c)
int32_t* var_c90_1
int32_t* esi_1

if (ebx == 0)
label_510d38:
    esi_1 = nullptr
label_510d3a:
    var_c90_1 = esi_1
else
    esi_1 = 7
    int32_t* eax_6 = *(eax_2 + 4) + 0x1594
    var_c90_1 = 7
    
    while (true)
        if (*eax_6 == ebx)
            goto label_510d3a
        
        if (eax_6[1] == ebx)
            break
        
        esi_1 += 1
        eax_6 = &eax_6[4]
        var_c90_1 = esi_1
        
        if (esi_1 s>= 0x48)
            goto label_510d38

int32_t var_c8c[0x321]
int32_t eax_8 = sub_5108a0(&var_c8c, esi_1, *(eax_2 + 4), &var_c8c)
int32_t var_c9c = eax_8
void* eax_10
int32_t edi_1

if (eax_8 s< 0xa)
    int32_t i_1 = 0xa - eax_8
    var_c9c = 0xa
    int32_t i
    
    do
        void* eax_9 = sub_573400()
        eax_10 = sub_5727e0(eax_9, eax_4, *(eax_9 + 4), esi_1, 0xffffffff, nullptr)
        i = i_1
        i_1 -= 1
    while (i != 1)
    edi_1 = 5
    goto label_510dce

int32_t eax_12
int32_t edx_2
edx_2:eax_12 = sx.q(eax_8)
eax_10 = eax_12 - edx_2
edi_1 = eax_10 s>> 1

if (edi_1 s< eax_8)
label_510dce:
    
    do
        eax_10 = sub_50c960(eax_10, var_c8c[edi_1], *(eax_2 + 4), eax_4)
        edi_1 += 1
    while (edi_1 s< var_c9c)
    
    esi_1 = var_c90_1

int32_t eax_13 = *(eax_2 + 4)

if (esi_1 s>= 0x48)
    sub_591930()

*(eax_13 + esi_1 * 0x10 + 0x1528) = eax_4
char* eax_16 = *(eax_2 + 0x70)

if (eax_16 == 0)
    sub_63b870(eax_16, &data_801800, "c.extraSetup", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x11b6, "Start_MakeSplitPile")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_5735a0(eax_16, eax_4, *(eax_2 + 4), eax_16, 0)
sub_56de40(*(eax_2 + 4), esi_1)
int32_t* ecx_7 = *(eax_2 + 4)
int32_t result = ecx_7[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6 && ecx_7[0x540].b == 0)
    int32_t eax_17 = 0xffffffff
    
    if (ecx_7[0x673] == 0xffffffff)
        eax_17 = ecx_7[0x674]
    
    result = sub_59f9b0(eax_17, 0xffffffff, ecx_7, eax_17, 0x4f, 0, nullptr, 0, ebx, eax_4, 0, 0)

CookieCheckFunction(result)
return result
