// 函数: sub_55bdf0
// 地址: 0x55bdf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
uint32_t esi = zx.d(arg1)
void* edi = *(eax + 4)

if (esi u>= 0x320)
    eax = sub_591930()

int32_t ebx = esi * 0x64
char eax_1 = sub_5754f0(eax, *(ebx + edi + 0x1a4c), edi, 2, 0)

if (eax_1 == 0)
    return eax_1

int32_t edi_1 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_3
eax_3.b = sub_56eec0(*(ebx + edi_1 + 0x1a4c)) == 1
return eax_3
