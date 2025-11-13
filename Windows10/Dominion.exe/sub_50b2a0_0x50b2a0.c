// 函数: sub_50b2a0
// 地址: 0x50b2a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_516f30(arg1)
int32_t i = 0
int32_t* esi = eax + 0xc

do
    if (*esi == 2)
        int32_t eax_9 = *(i * 0x26c + eax + 0x10)
        
        if (eax_9 != 0 && eax_9() == 0)
            return sub_63b5f0("Don't meet requirement for twist")
        
        break
    
    i += 1
    esi = &esi[0x9b]
while (i s< 4)

uint32_t esi_1 = sub_516f30(arg1)
int32_t* var_60

if (arg1 == 0x17e3)
    void* eax_4 = data_cca780 + 0xc + (data_cca784 << 0xb)
    int32_t i_2 = 0x14
    int32_t* ebx_1 = eax_4 + 0x26c
    int32_t i_1
    
    do
        var_60 = &std::_Func_impl_no_alloc<class <lambda_0da76c1fb1f7e3c2524723ff49b3fad1>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
        int32_t** var_3c_1 = &var_60
        int32_t eax_6 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
        *ebx_1 = eax_6
        void* eax_7 = sub_571b30(eax_6, 0x17)
        int32_t j = 0
        void* ecx_2 = eax_7 + 0xc8
        
        do
            int32_t esi_2 = *(ecx_2 - 0x20)
            
            if (esi_2 == 0)
                break
            
            if (esi_2 == 0xd)
                int32_t esi_3 = *ecx_2
                
                if (esi_3 != 0)
                    int32_t eax_12 = j * 0xb4
                    int32_t ecx_3 = *(eax_12 + eax_7 + 0xbc)
                    int32_t k_1 = *(eax_12 + eax_7 + 0xc0)
                    int32_t var_1c = esi_3
                    
                    if (k_1 s> 0)
                        void* esi_6 = eax_4 + 0x118 + (ecx_3 << 2)
                        int32_t k
                        
                        do
                            int32_t* var_5c_1 = &var_1c
                            var_60 = &std::_Func_impl_no_alloc<class <lambda_be2cfa244d4912ebd43891f759bfd414>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
                            int32_t** var_3c_3 = &var_60
                            *esi_6 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
                            esi_6 += 4
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                    
                    break
            
            j += 1
            ecx_2 += 0xb4
        while (j s< 8)
        
        ebx_1 = &ebx_1[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
else if (arg1 == 0x17d8)
    var_60 = &std::_Func_impl_no_alloc<class <lambda_d1d8a37b8fc8e2a32cb019feb033559d>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_3c_4 = &var_60
    int32_t eax_16 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
    *((data_cca784 << 0xb) + data_cca780 + 0x2cc) = eax_16
    sub_58e890(eax_16, 0)

int32_t ecx_5 = 0
uint32_t eax_18 = esi_1

while (true)
    uint32_t var_24
    
    if (*(eax_18 + 0xc) == 4)
        int32_t var_10 = eax_18 + 0x10
        eax_18 = *(ecx_5 * 0x26c + esi_1 + 0x270)
        var_24 = eax_18
        
        if (eax_18 != 0)
            int32_t* var_5c_2 = &var_24
            var_60 = &std::_Func_impl_no_alloc<class <lambda_415f7ea91a0d7399bd91b65b9795f86f>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
            int32_t* var_58_1 = &var_10
            int32_t** var_3c_5 = &var_60
            int32_t eax_22 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
            
            if (eax_22 == 0)
                eax_18, ecx_5 = sub_63b5f0("Couldn't add twist card")
            else
                int32_t eax_23 = data_cca780
                
                if (*((data_cca784 << 0xb) + eax_23 + 0x30) != 0)
                    sub_63b870(eax_23, &data_801800, "CampaignHasKingdomPilesFree(1)", 
                        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x4a6, 
                        "CampaignAddTwist")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                eax_18, ecx_5 = sub_50a6a0(eax_23, eax_22, eax_22, 4, 0)
        
        break
    
    ecx_5 += 1
    eax_18 += 0x26c
    
    if (ecx_5 s>= 4)
        var_24 = 0
        break

int32_t var_3c_8 = 0
return sub_50ac80(eax_18, 0, arg1, ecx_5, 0)
