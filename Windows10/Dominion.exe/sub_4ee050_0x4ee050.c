// 函数: sub_4ee050
// 地址: 0x4ee050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t i = 0
void* ebx = arg1 + 0xd0

if (*(arg1 + 0xd4) s> 0)
    int32_t* esi_1 = nullptr
    
    do
        int32_t eax_2 = *(esi_1 + *ebx)
        
        if (eax_2 != 0)
            sub_7597b9(eax_2)
        
        int32_t eax_4 = *(*ebx + esi_1 + 0x34)
        
        if (eax_4 != 0)
            sub_7597b9(eax_4)
        
        i += 1
        esi_1 = &esi_1[0x15]
    while (i s< *(arg1 + 0xd4))

sub_7597b9(*ebx)
int32_t var_1c = 0xe4
operator new(arg1)
return arg1
