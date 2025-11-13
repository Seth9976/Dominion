// 函数: sub_600a30
// 地址: 0x600a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_6006c0(data_ccf6d8, 0)
int32_t* eax = sub_4b9480()
void* edi = data_cc8d5c
eax[8] |= 1

if (edi == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edi_1 = *(edi + 0x506c)
uint32_t result = eax[7] - 0x64

if (result u> 0x19)
    sub_63b5f0("==save game==")
    result = sub_4da3a0(eax, edi_1)
    
    if (result.b != 0)
        return TPI1::QueryTiForCVRecord(eax)

return result
