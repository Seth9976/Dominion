// 函数: sub_6a7e20
// 地址: 0x6a7e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
FILE* _Stream_1 = fopen(arg2, "rb")
FILE* _Stream = _Stream_1
int32_t var_1c_1
char* ecx

if (_Stream != 0)
    fseek(_Stream, 0, 2)
    uint32_t _ElementCount = ftell(_Stream)
    fseek(_Stream, 0, 0)
    int32_t _Buffer = sub_687730(_ElementCount) + 1
    *arg1 = _Buffer
    _Stream_1 = fread(_Buffer, 1, _ElementCount, _Stream)
    
    if (_Stream_1 == _ElementCount)
        fclose(_Stream)
        *(_ElementCount + *arg1) = 0
        return _ElementCount
    
    char const* const var_18_2 = "DefinitionReadFileStr"
    var_1c_1 = 0x157
    ecx = "result == fileSize"
else
    char const* const var_18 = "DefinitionReadFileStr"
    var_1c_1 = 0x14f
    ecx = "file"

sub_63b870(_Stream_1, &data_801800, ecx, "C:\x\ax2017\Engine\Spine.cpp", var_1c_1, 
    "DefinitionReadFileStr")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
