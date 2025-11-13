// 函数: sub_550790
// 地址: 0x550790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_14
void* eax = sub_56fff0(&var_14)
void* var_c = eax
char const* const var_34_1
int32_t var_30_1
char const* const var_2c
char* ecx_1

if (eax s>= 0xf)
    eax = sub_573400()
    void* var_10_1 = eax
    int32_t* esi_1 = 0x27
    void* edi_1 = *(eax + 4)
    void* var_18_1 = edi_1
    int32_t* ecx_2 = edi_1 + 0x1794
    
    while (true)
        if (*ecx_2 == 0)
            void* ecx_3 = edi_1
            int32_t eax_2 = esi_1 * 2
            *(ecx_3 + (eax_2 << 3) + 0x1524) = 0x1301
            *(ecx_3 + (eax_2 << 3) + 0x1528) = 0
            *(ecx_3 + (eax_2 << 3) + 0x152c) = 0
            *(ecx_3 + (eax_2 << 3) + 0x1530) = 0
            int32_t eax_3 = *(ecx_3 + 0x1504)
            int32_t ebx_1
            
            if (eax_3 == 3 || eax_3 == 5 || eax_3 == 4 || eax_3 == 6)
                ebx_1 = 0
                goto label_550892
            
            ecx_3.b = eax_3 == 2
            sub_61b1b0(eax_3, 1, ecx_3.b, 0xffffffff, 0, esi_1, 0x1301, nullptr, nullptr, 0, 0, 0, 
                0, 0)
            ebx_1 = 0
            
            while (true)
                ecx_3 = edi_1
            label_550892:
                int32_t* eax_4 = var_14
                int32_t edi_2 = eax_4[ebx_1]
                
                if (edi_2 == 0)
                    return sub_572b80(esi_1, 0xffffffff)
                
                sub_5727e0(eax_4, edi_2, ecx_3, esi_1, 0xffffffff, nullptr)
                eax = *(var_10_1 + 0x70)
                
                if (eax == 0)
                    break
                
                edi_1 = var_18_1
                sub_5735a0(eax, edi_2, edi_1, eax, 1)
                ebx_1 += 1
                
                if (ebx_1 s>= var_c)
                    return sub_572b80(esi_1, 0xffffffff)
            
            var_2c = "BlackMarket_Setup"
            var_30_1 = 0x118
            ecx_1 = "c.extraSetup"
            break
        
        esi_1 += 1
        ecx_2 = &ecx_2[4]
        
        if (esi_1 s>= 0x47)
            var_2c = "NextAvailableNonSupplyPile"
            var_30_1 = 0x625
            var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "Halt"
            goto label_550909
else
    var_2c = "BlackMarket_Setup"
    var_30_1 = 0x10a
    ecx_1 = "numWhats >= 15"

var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Promos.cpp"
label_550909:
sub_63b870(eax, &data_801800, ecx_1, var_34_1, var_30_1, var_2c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
