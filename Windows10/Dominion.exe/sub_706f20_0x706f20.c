// 函数: sub_706f20
// 地址: 0x706f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
arg3[2] -= 1

if (arg4 == 0)
    sub_706dc0(arg3)
else
    sub_706e20(arg3)

uint32_t result = fwrite(&data_88d860, 1, 2, *arg3)

if (result == 2)
    sub_706c90(arg3, arg2)
    result = fwrite(&data_88d834, 1, 1, *arg3)
    
    if (result == 1)
        arg3[1] = 2
        return result

sub_63b870(result, &data_801800, "resultCount == len", "C:\x\ax2017\Engine\XmlWriter.cpp", 0x29, 
    "sXmlEmit")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
