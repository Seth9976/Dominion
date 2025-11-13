// 函数: sub_63b660
// 地址: 0x63b660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILE* _Stream = data_cf64ac

if (_Stream == 0)
    sub_69db50(&data_cf64b0)
    _Stream = fopen(&data_cf64b0, U"a")
    
    if (_Stream == 0)
        return OutputDebugStringA("Failed to open log file\n")

char* ecx = arg1
data_cf64ac = _Stream
FILE* eax

do
    eax.b = *ecx
    ecx = &ecx[1]
while (eax.b != 0)

if (fwrite(arg1, ecx - &ecx[1], 1, _Stream) != 1)
    OutputDebugStringA("Failed to write to log file\n")

return fflush(_Stream)
