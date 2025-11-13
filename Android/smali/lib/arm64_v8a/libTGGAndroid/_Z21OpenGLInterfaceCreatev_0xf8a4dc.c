// 函数: _Z21OpenGLInterfaceCreatev
// 地址: 0xf8a4dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gGraphicsDriverType = 1
void** result = XPooledCalloc(0x5050)
__builtin_memset(&result[0x849], 0, 0x18)
*result = _vtable_for_OpenGLInterface + 0x10
result[0x84c].d = 1
result[0x84d] = 0
*gOpenGLInterface = result
*gGraphicsInterface = result
return result
