// 函数: sub_6a6540
// 地址: 0x6a6540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i_1

for (int32_t* i = *(arg1 + 4); i != 0; i = i_1)
    int32_t* edi_1 = *i
    char* const edx = &data_801800
    i_1 = i[1]
    char* eax_1 = *edi_1
    
    if (eax_1 != 0)
        edx = eax_1
    
    eax_1.b = edi_1[5].b == 0
    uint32_t eax_2 = zx.d(eax_1.b)
    int32_t edx_1 = sub_706ea0(eax_2, edx, arg2, eax_2.b)
    char* eax_3 = edi_1[2]
    
    if (eax_3 != 0 && *eax_3 != 0)
        sub_706fc0(eax_3, edx_1, arg2, eax_3)
    
    bool var_10_1 = false
    
    if (edi_1[3] == 0)
        char* ebx_1 = edi_1[1]
        
        if (ebx_1 != 0 && *ebx_1 != 0)
            int32_t eax_4 = arg2[1]
            
            if (eax_4 != 1 && eax_4 != 3)
                sub_63b870(eax_4, &data_801800, 
                    "pXmlWriter->mWriterState == XML_WRITE_OPEN_TAG || pXmlWriter->mWriterState == 
                        XML_WRITE_LITERAL", 
                    "C:\x\ax2017\Engine\XmlWriter.cpp", 0xbb, "XmlWriteLiteralString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_706dc0(arg2)
            sub_706cf0(arg2, ebx_1)
    else
        sub_6a6540()
        var_10_1 = *(edi_1 + 0x15) == 0
    
    char* eax_5 = *edi_1
    char* edx_4 = &data_801800
    
    if (eax_5 != 0)
        edx_4 = eax_5
    
    sub_706f20(eax_5, edx_4, arg2, var_10_1)
