// 函数: sub_553310
// 地址: 0x553310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *(sub_573400() + 4)
uint32_t eax_1 = zx.d(arg1)
int32_t esi = eax_1 * 0x64

if (eax_1 u< 0x320)
    void* eax_4
    eax_4.b = *(esi + edi + 0x1a58) == *(esi + *(sub_573400() + 4) + 0x1a50)
    return eax_4

sub_591930()
int32_t edi_1 = *(esi + edi + 0x1a58)
int32_t ebx = *(sub_573400() + 4)
sub_591930()
uint32_t eax_3
eax_3.b = edi_1 == *(esi + ebx + 0x1a50)
return eax_3
