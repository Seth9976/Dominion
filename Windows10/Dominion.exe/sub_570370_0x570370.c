// 函数: sub_570370
// 地址: 0x570370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg2
int32_t* var_8 = esi
sub_56a3f0(arg1.b, 1)

if (esi s>= 0x48)
    sub_591930()

int32_t i = 0
void* eax_1 = esi * 2
void* ecx_1 = *(arg1 + (eax_1 << 3) + 0x1524)
*(arg1 + (eax_1 << 3) + 0x1524) = 0

if (*(arg1 + 0x19a4) s> 0)
    eax_1 = arg1
    void* ebx_1 = arg1 + 0x152dc
    
    do
        if (*(ebx_1 - 0xc) == esi)
            int32_t j_1 = *ebx_1
            
            if (j_1 != 0)
                if (*(ebx_1 - 0x14) == 0x600)
                    void* eax_2 = sub_573400()
                    sub_584790(eax_2, i, *(eax_2 + 4), 6)
                    eax_1 = arg1
                else if (*(ebx_1 - 0x10) != 0xffffffff)
                    void* eax_3 = sub_573400()
                    sub_584790(eax_3, i, *(eax_3 + 4), 0x3f1)
                    eax_1 = arg1
                else if (j_1 s> 0)
                    int32_t j
                    
                    do
                        void* eax_4 = sub_573400()
                        sub_584790(eax_4, i, *(eax_4 + 4), 1)
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    eax_1 = arg1
            
            esi = var_8
        
        i += 1
        ebx_1 += 0x20
    while (i s< *(eax_1 + 0x19a4))

if (esi == 0)
    sub_63b870(eax_1, &data_801800, "where != CW_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1d09, "RemovePile")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = *(arg1 + 0x1504)

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

void* var_3c_1 = ecx_1
ecx_1.b = result == 2
return sub_61b1b0(result, 0x2f, ecx_1.b, 0xffffffff, 0, esi, var_3c_1, nullptr, nullptr, 0, 0, 0, 
    0, 0)
