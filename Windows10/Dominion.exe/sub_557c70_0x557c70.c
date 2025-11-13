// 函数: sub_557c70
// 地址: 0x557c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_56d020()
void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t edi = *(eax + 0x40)
void* eax_1 = sub_573400()
uint32_t ebx = zx.d(edi.w)
int32_t eax_2 = *(eax_1 + 4)

if (ebx u>= 0x320)
    sub_591930()

uint32_t result = sub_582d10(eax_2, *(ebx * 0x64 + eax_2 + 0x1a70), *(eax_1 + 4), edi, 0x3e9, 0xb, 
    0x3eb, 2, *(eax_1 + 0x28), *(eax_1 + 0x2c), *(eax_1 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
return result
