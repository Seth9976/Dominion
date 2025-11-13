// 函数: sub_50dab0
// 地址: 0x50dab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edx = data_cce9ac
void* ecx_2 = (data_cca784 << 0xb) + data_cca780 + 0xc
int32_t i = 0
int32_t i_1 = 0
int32_t* eax_4 = ecx_2 + 0x28

do
    if (*eax_4 == edx)
        int32_t var_40
        int32_t eax_5 = sub_50d950(ecx_2, &var_40)
        int32_t edi = eax_5
        int32_t esi = 0
        
        if (edi s> 0)
            do
                eax_5 = sub_547560(edx, (&var_40)[esi])
                
                if (eax_5.b == 0)
                    eax_5 = (&i_1)[edi]
                    edi -= 1
                    (&var_40)[esi] = eax_5
                    esi -= 1
                
                esi += 1
            while (esi s< edi)
            
            i = i_1
        
        sub_63eda0(eax_5, &var_40, &data_cc8de0, edi, 2)
        int32_t ecx_6 = i * 0xf
        *(ecx_2 + (ecx_6 << 2) + 0x2c) = var_40
        uint32_t result
        *(ecx_2 + (ecx_6 << 2) + 0x30) = result
        CookieCheckFunction(result)
        return result
    
    i += 1
    eax_4 = &eax_4[0xf]
    i_1 = i
while (i s< 4)

sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x9d7, "LandMod_Trait_Affects2Piles::<lambda_710a771187743e3e7192e4912e5a95b9>::operator ()")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
