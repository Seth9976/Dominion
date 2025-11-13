// 函数: sub_6a6650
// 地址: 0x6a6650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILE* _Stream = nullptr
sub_69db50(arg4)
FILE* _Stream_1 = fopen(arg4, "wb")
_Stream = _Stream_1

if (_Stream_1 == 0)
    char* var_24_2 = arg4
    sub_63b5f0("DefXMLWriteFile: failed to open file %s")
    uint32_t eax_3
    eax_3.b = 0
    return eax_3

char* esi_1 = *arg2
int32_t var_c = 0
int32_t var_8 = 0
uint32_t eax = fwrite(&data_88d840, 1, 1, _Stream_1)

if (eax != 1)
    sub_63b870(eax, &data_801800, "resultCount == len", "C:\x\ax2017\Engine\XmlWriter.cpp", 0x29, 
        "sXmlEmit")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_706c90(&_Stream, esi_1)
int32_t var_8_1 = var_8 + 1
int32_t var_c_1 = 1
sub_706f20(sub_6a6540(arg3, &_Stream), *arg2, &_Stream, 1)
sub_706e20(&_Stream)
fclose(_Stream)
int32_t eax_2
eax_2.b = 1
return eax_2
