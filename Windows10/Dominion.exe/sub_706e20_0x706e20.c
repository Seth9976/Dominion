// 函数: sub_706e20
// 地址: 0x706e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[1] == 0)
    return 

sub_706dc0(arg1)
uint32_t eax = fwrite(&data_87884c, 1, 2, *arg1)

if (eax != 2)
label_706e87:
    sub_63b870(eax, &data_801800, "resultCount == len", "C:\x\ax2017\Engine\XmlWriter.cpp", 0x29, 
        "sXmlEmit")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi_1 = 0

if (arg1[2] s<= 0)
    return 

while (true)
    eax = fwrite(&data_88d844, 1, 2, *arg1)
    
    if (eax != 2)
        break
    
    esi_1 += 1
    
    if (esi_1 s>= arg1[2])
        return 

goto label_706e87
