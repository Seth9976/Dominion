// 函数: sub_706fc0
// 地址: 0x706fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t var_18
char const* const var_14
char* ecx

if (arg3[1] == 1)
    arg1 = fwrite(&data_807454, 1, 1, *arg3)
    
    if (arg1 == 1)
        sub_706cf0(arg3, "label")
        arg1 = fwrite(&data_88d864, 1, 2, *arg3)
        
        if (arg1 == 2)
            sub_706cf0(arg3, arg4)
            arg1 = fwrite(&data_88d8b0, 1, 1, *arg3)
            
            if (arg1 == 1)
                return arg1
    
    var_14 = "sXmlEmit"
    var_18 = 0x29
    ecx = "resultCount == len"
else
    var_14 = "XmlWriteAttributeString"
    var_18 = 0x99
    ecx = "pXmlWriter->mWriterState == XML_WRITE_OPEN_TAG"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\XmlWriter.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
