// 函数: __onexit
// 地址: 0x75961e
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax

if (data_cc89ec != 0xffffffff)
    eax = _register_onexit_function(&data_cc89ec, arg1)
else
    eax = _crt_atexit(arg1)

if (eax == 0)
    return arg1

return nullptr
