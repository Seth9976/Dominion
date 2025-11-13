// 函数: sub_665600
// 地址: 0x665600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
void* i = data_c23ba8
int32_t eax

for (void* esi_1 = data_c23bac * 0x18d0 + i; i u< esi_1; i += 0x18d0)
    if ((*(i + 0x18c8) & 0xffff0000) != 0)
        if (i != 0xffffffff)
            int32_t edi_1 = data_c27c20
            
            do
                if (*(i + 0x1600) == edi_1 && *(i + 0x171c) == 0 && *(i + 5) == 0)
                    void* ecx = *(i + 0x1718)
                    
                    if (ecx != 0)
                        eax = sub_6655e0(ecx)
                    
                    if ((ecx == 0 || eax.b == 0) && *(i + 0x1604) == arg1)
                        return i
                
                i += 0x18d0
                
                if (i u>= esi_1)
                    break
                
                while ((*(i + 0x18c8) & 0xffff0000) == 0)
                    i += 0x18d0
                    
                    if (i u>= esi_1)
                        goto label_6656d1
            while (i != 0xffffffff)
        
        break

label_6656d1:
sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x3589, "UI2GetIndex")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
