// 函数: _ZN15OpenGLInterface23GraphicsInterfaceAttachEPv
// 地址: 0xf8a678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XTrace("OpenGLInterface::GraphicsInterfaceAttach")
*(arg1 + 0x4270) = 0
*(arg1 + 0x4274) = 0
*(arg1 + 0x4234) = *gRgbaBlack
memset(arg1 + 0x20, 0xfe, 0x4000)

for (int64_t i = 0; i != 0x214; )
    void* x12_2 = *gOpenGLInterface + i
    i += 4
    *(x12_2 + 0x4020) = 0xbaadf00d

int64_t x0_1 = AppGetWindowSize()
*(arg1 + 8) = float.s(x0_1.d)
*(arg1 + 0xc) = float.s((x0_1 u>> 0x20).d)
int64_t var_28 = 0
glGetIntegerv(0x821b, &var_28:4)
glGetIntegerv(0x821c, &var_28)
glGetString(0x1f02)
char* haystack = glGetString(0x1f01)

if (strstr(haystack, "Mali-T760") != 0)
    *gHaveMali760 = 1

if (strstr(haystack, "Adreno (TM) 420") != 0)
    uint64_t x8_1 = *gAppInterface
    *gHaveAdreno420 = 1
    
    if (*(x8_1 + 0x30) s>= 3)
        XTrace("Setting msaa to 2x for adreno")
        *(*gAppInterface + 0x30) = 2

glGetIntegerv(0xd33, arg1 + 0x5048)
*(arg1 + 0x5048)
return XTrace("GL version %s (%d.%d) %s (%d)")
