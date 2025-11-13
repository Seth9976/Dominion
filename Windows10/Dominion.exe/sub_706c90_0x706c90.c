// 函数: sub_706c90
// 地址: 0x706c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg2
char i

do
    i = *esi
    esi = &esi[1]
while (i != 0)
void* _ElementCount = esi - &esi[1]
uint32_t result = fwrite(arg2, 1, _ElementCount, *arg1)

if (result == _ElementCount)
    return result

sub_63b870(result, &data_801800, "resultCount == len", "C:\x\ax2017\Engine\XmlWriter.cpp", 0x29, 
    "sXmlEmit")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
