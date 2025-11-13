// 函数: sub_69d050
// 地址: 0x69d050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *arg2
uint32_t result = *(esi + arg6)
void* ebx = esi + arg3
arg6 = result

if (arg5 == 0)
    *ebx = arg5
    return result

if ((arg2[0xa] & 0x100) != 0 && result u<= 0x100000)
    return result

void* eax_1 = arg2[6]
int32_t esi_1 = *(eax_1 + 0xc)

if (esi_1 != 0)
    uint32_t count = esi_1 * arg5
    int32_t eax_2 = sub_687730(count)
    *ebx = eax_2
    return sub_69cf40(memcpy(eax_2, arg6, count), arg5, *ebx, arg2, arg4, arg6)

sub_63b870(eax_1, &data_801800, "pDefMap->definitionSize != 0", 
    "C:\x\ax2017\Engine\Definition.cpp", 0x6d, "DefinitionGetSize")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
