// 函数: sub_55df90
// 地址: 0x55df90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 2, 0)
uint32_t eax_1
int32_t ecx
eax_1, ecx = sub_56b800()
int32_t var_14 = ecx
char result = sub_5624a0(eax_1, 0x3e9)

if (result == 0)
    return result

uint32_t eax_2 = sub_56b490(0x37, 0x21)
void* eax_3 = sub_573400()
void* eax_4 = *(eax_3 + 4)
void* i

if (eax_2 != 0)
    i = 7
    eax_4 += 0x1594
    
    do
        if (*eax_4 == eax_2)
            goto label_55dffb
        
        if (*(eax_4 + 4) == eax_2)
            goto label_55dffb
        
        i += 1
        eax_4 += 0x10
    while (i s< 0x48)

i = nullptr
label_55dffb:
int32_t var_14_1 = 0
int32_t var_18_1 = *(eax_3 + 0xc)
int32_t var_1c_1 = 0
return sub_571fa0(eax_4, 0xffffffff, *(eax_3 + 4), 0x400, 1, i, nullptr)
