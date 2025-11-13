// 函数: _Z13SetPodCounter9UI2Handleib
// 地址: 0xaffa98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((zx.d(data_182aa48) & 1) == 0 && __cxa_guard_acquire(&data_182aa48) != 0)
    data_182b530 = _vtable_for_UI2StateDecl + 0x10
    void* x0_5 = UI2StateDeclTryLookup("pod_counter")
    
    if (x0_5 == 0)
        (*data_182b530)(&data_182b530, "pod_counter")
        uint32_t x10_1 = *UI2StateDeclI_counter
        uint64_t x11_1 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_182b530
        *UI2StateDeclI_counter = x10_1 + 1
        data_182b538 = x11_1
    else
        (*data_182b530)(&data_182b530, *(x0_5 + 0x10))
    
    data_182b530 = _vtable_for_UI2StateDeclText + 0x10
    __cxa_guard_release(&data_182aa48)

if ((zx.d(data_182aa50) & 1) == 0 && __cxa_guard_acquire(&data_182aa50) != 0)
    data_182b548 = _vtable_for_UI2StateDecl + 0x10
    void* x0_7 = UI2StateDeclTryLookup("pod_count_on")
    
    if (x0_7 == 0)
        (*data_182b548)(&data_182b548, "pod_count_on")
        uint32_t x10_3 = *UI2StateDeclI_counter
        uint64_t x11_2 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_182b548
        *UI2StateDeclI_counter = x10_3 + 1
        data_182b550 = x11_2
    else
        (*data_182b548)(&data_182b548, *(x0_7 + 0x10))
    
    __cxa_guard_release(&data_182aa50)

UI2SetState(zx.q(x19), &data_182b548, 0xffffffff, 0)

if ((arg3.d & 1) == 0)
    XStringFromInt(arg2)
else
    XFormatString("x%d")

void var_38
UI2SetText(zx.q(x19), &data_182b530, &var_38, 0xffffffff)
return XString::~XString()
