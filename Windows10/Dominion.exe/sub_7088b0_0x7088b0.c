// 函数: sub_7088b0
// 地址: 0x7088b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg1
char* eax = *ebx
char edx = *eax
uint32_t _Size = zx.d(edx) & 0x7f
*ebx = &eax[1]

if (edx s< 0)
    arg1.b = eax[1]
    *ebx = &eax[2]
    _Size |= (zx.d(arg1.b) & 0x7f) << 7
    
    if (arg1.b s< 0)
        arg1.b = eax[2]
        *ebx = &eax[3]
        _Size |= (zx.d(arg1.b) & 0x7f) << 0xe
        
        if (arg1.b s< 0)
            arg1.b = eax[3]
            *ebx = &eax[4]
            _Size |= (zx.d(arg1.b) & 0x7f) << 0x15
            
            if (arg1.b s< 0)
                arg1.b = eax[4]
                *ebx = &eax[5]
                _Size |= zx.d(arg1.b) << 0x1c

if (_Size == 0)
    return 0

int32_t eax_14 = data_147ded8
int32_t result

if (eax_14 == 0)
    result = malloc(_Size)
else
    result =
        eax_14(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)

memcpy(result, *ebx, _Size - 1)
*ebx += _Size - 1
*(_Size + result - 1) = 0
return result
