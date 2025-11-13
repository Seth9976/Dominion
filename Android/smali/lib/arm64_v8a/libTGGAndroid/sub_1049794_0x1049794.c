// 函数: sub_1049794
// 地址: 0x1049794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *RECT0
data_24b4978 = 0
*UIS_EDITOR = _vtable_for_UI2StateDecl + 0x10
data_24b4968 = v0
int64_t (* const x21)() = *UI2StateDeclI_head

if (x21 == 0)
label_1049828:
    uint32_t x8_1 = *UI2StateDeclI_counter
    *(UIS_EDITOR + 8) = x21
    *(UIS_EDITOR + 0x10) = "editor"
    x21 = UIS_EDITOR
    *UI2StateDeclI_counter = x8_1 + 1
    *UI2StateDeclI_head = UIS_EDITOR
else
    int64_t (* const x23_1)() = x21
    
    while (true)
        char* s1 = *(x23_1 + 0x10)
        
        if (strcasecmp(s1, "editor") == 0)
            *(UIS_EDITOR + 0x10) = s1
            break
        
        x23_1 = *(x23_1 + 8)
        
        if (x23_1 == 0)
            goto label_1049828

int64_t (* const x23_2)() = x21
*UIS_GAME = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_1 = *(x23_2 + 0x10)
    
    if (strcasecmp(s1_1, "game") == 0)
        *(UIS_GAME + 0x10) = s1_1
        break
    
    x23_2 = *(x23_2 + 8)
    
    if (x23_2 == 0)
        uint32_t x8_4 = *UI2StateDeclI_counter
        *(UIS_GAME + 8) = x21
        *(UIS_GAME + 0x10) = "game"
        x21 = UIS_GAME
        *UI2StateDeclI_head = UIS_GAME
        *UI2StateDeclI_counter = x8_4 + 1
        break

int64_t (* const x23_3)() = x21
*UIS_PLACEHOLDER = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_2 = *(x23_3 + 0x10)
    
    if (strcasecmp(s1_2, "placeholder") == 0)
        *(UIS_PLACEHOLDER + 0x10) = s1_2
        break
    
    x23_3 = *(x23_3 + 8)
    
    if (x23_3 == 0)
        uint32_t x8_7 = *UI2StateDeclI_counter
        *(UIS_PLACEHOLDER + 8) = x21
        *(UIS_PLACEHOLDER + 0x10) = "placeholder"
        x21 = UIS_PLACEHOLDER
        *UI2StateDeclI_head = UIS_PLACEHOLDER
        *UI2StateDeclI_counter = x8_7 + 1
        break

int64_t (* const x23_4)() = x21
*UIS_TEXT_ACTIVE = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_3 = *(x23_4 + 0x10)
    
    if (strcasecmp(s1_3, "text_active") == 0)
        *(UIS_TEXT_ACTIVE + 0x10) = s1_3
        break
    
    x23_4 = *(x23_4 + 8)
    
    if (x23_4 == 0)
        uint32_t x8_10 = *UI2StateDeclI_counter
        *(UIS_TEXT_ACTIVE + 8) = x21
        *(UIS_TEXT_ACTIVE + 0x10) = "text_active"
        *UI2StateDeclI_head = UIS_TEXT_ACTIVE
        x21 = UIS_TEXT_ACTIVE
        *UI2StateDeclI_counter = x8_10 + 1
        break

int64_t (* const x23_5)() = x21
*UIS_MOUSE_OVER = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_4 = *(x23_5 + 0x10)
    
    if (strcasecmp(s1_4, "mouse_over") == 0)
        *(UIS_MOUSE_OVER + 0x10) = s1_4
        break
    
    x23_5 = *(x23_5 + 8)
    
    if (x23_5 == 0)
        uint32_t x8_13 = *UI2StateDeclI_counter
        *(UIS_MOUSE_OVER + 8) = x21
        *(UIS_MOUSE_OVER + 0x10) = "mouse_over"
        x21 = UIS_MOUSE_OVER
        *UI2StateDeclI_head = UIS_MOUSE_OVER
        *UI2StateDeclI_counter = x8_13 + 1
        break

int64_t (* const x23_6)() = x21
*UIS_MOUSE_CLICKED = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_5 = *(x23_6 + 0x10)
    
    if (strcasecmp(s1_5, "mouse_clicked") == 0)
        *(UIS_MOUSE_CLICKED + 0x10) = s1_5
        break
    
    x23_6 = *(x23_6 + 8)
    
    if (x23_6 == 0)
        uint32_t x8_16 = *UI2StateDeclI_counter
        *(UIS_MOUSE_CLICKED + 8) = x21
        *(UIS_MOUSE_CLICKED + 0x10) = "mouse_clicked"
        x21 = UIS_MOUSE_CLICKED
        *UI2StateDeclI_head = UIS_MOUSE_CLICKED
        *UI2StateDeclI_counter = x8_16 + 1
        break

int64_t (* const x23_7)() = x21
*UIS_MOUSE_DOWN = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_6 = *(x23_7 + 0x10)
    
    if (strcasecmp(s1_6, "mouse_down") == 0)
        *(UIS_MOUSE_DOWN + 0x10) = s1_6
        break
    
    x23_7 = *(x23_7 + 8)
    
    if (x23_7 == 0)
        uint32_t x8_19 = *UI2StateDeclI_counter
        *(UIS_MOUSE_DOWN + 8) = x21
        *(UIS_MOUSE_DOWN + 0x10) = "mouse_down"
        x21 = UIS_MOUSE_DOWN
        *UI2StateDeclI_head = UIS_MOUSE_DOWN
        *UI2StateDeclI_counter = x8_19 + 1
        break

int64_t (* const x23_8)() = x21
*UIS_GFX_HIGH = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_7 = *(x23_8 + 0x10)
    
    if (strcasecmp(s1_7, "gfxHigh") == 0)
        *(UIS_GFX_HIGH + 0x10) = s1_7
        *UIS_GFX_LOW = _vtable_for_UI2StateDecl + 0x10
        
        if (x21 == 0)
        label_1049b0c:
            uint32_t x9_2 = *UI2StateDeclI_counter
            *(UIS_GFX_LOW + 8) = x21
            *(UIS_GFX_LOW + 0x10) = "gfxLow"
            *UI2StateDeclI_counter = x9_2 + 1
            *UI2StateDeclI_head = UIS_GFX_LOW
            break
    else
        x23_8 = *(x23_8 + 8)
        
        if (x23_8 != 0)
            continue
        else
            uint32_t x8_22 = *UI2StateDeclI_counter
            *(UIS_GFX_HIGH + 8) = x21
            *(UIS_GFX_HIGH + 0x10) = "gfxHigh"
            *UI2StateDeclI_head = UIS_GFX_HIGH
            *UI2StateDeclI_counter = x8_22 + 1
            *UIS_GFX_LOW = _vtable_for_UI2StateDecl + 0x10
            x21 = UIS_GFX_HIGH
    
    int64_t (* const x22_1)() = x21
    
    while (true)
        char* s1_8 = *(x22_1 + 0x10)
        
        if (strcasecmp(s1_8, "gfxLow") == 0)
            *(UIS_GFX_LOW + 0x10) = s1_8
            break
        
        x22_1 = *(x22_1 + 8)
        
        if (x22_1 == 0)
            goto label_1049b0c
    
    break

*(macro_field_StateEffectDef + 0xd0) = 0x10
*macro_field_StateEffectDef = 0
*(macro_field_StateEffectDef + 8) = "name"
*(macro_field_StateEffectDef + 0x10) = "DefString"
*(macro_field_StateEffectDef + 0x18) = 0
*(macro_field_StateEffectDef + 0x20) = 0
*(macro_field_StateEffectDef + 0x30) = 0
*(macro_field_StateEffectDef + 0x38) = 0
*(macro_field_StateEffectDef + 0x28) = 0
*(macro_field_StateEffectDef + 0x40) = 0
*(macro_field_StateEffectDef + 0x48) = &data_793a18
*(macro_field_StateEffectDef + 0x50) = 0
*(macro_field_StateEffectDef + 0x58) = &data_793a18
*(macro_field_StateEffectDef + 0x68) = 8
*(macro_field_StateEffectDef + 0x70) = "stateName"
*(macro_field_StateEffectDef + 0x78) = "DefString"
*(macro_field_StateEffectDef + 0x80) = 0
*(macro_field_StateEffectDef + 0x88) = 0
*(macro_field_StateEffectDef + 0x90) = 0
*(macro_field_StateEffectDef + 0x98) = 0
*(macro_field_StateEffectDef + 0xa8) = 0
*(macro_field_StateEffectDef + 0xa0) = 0
*(macro_field_StateEffectDef + 0xb0) = &data_793a18
*(macro_field_StateEffectDef + 0xb8) = 0
*(macro_field_StateEffectDef + 0xc0) = &data_793a18
*(macro_field_StateEffectDef + 0xd8) = "duration"
*(macro_field_StateEffectDef + 0xe0) = "float"
*(macro_field_StateEffectDef + 0xe8) = 0
*(macro_field_StateEffectDef + 0xf0) = 0
*(macro_field_StateEffectDef + 0x100) = 0
*(macro_field_StateEffectDef + 0x108) = 0
*(macro_field_StateEffectDef + 0x110) = 0
*(macro_field_StateEffectDef + 0xf8) = 0
*(macro_field_StateEffectDef + 0x118) = 0
*(macro_field_StateEffectDef + 0x120) = 0
*(macro_field_StateEffectDef + 0x128) = &data_793a18
*(macro_field_StateEffectDef + 0x60) = 8
*(macro_field_StateEffectDef + 0xc8) = 8
*(macro_field_StateEffectDef + 0x130) = 4
*macro_ptr_StateEffectDef = RegisterDefMapBeforeMain(macro_map_StateEffectDef)
uint64_t x0_22
int64_t v0_1
x0_22, v0_1 = RegisterDefMapBeforeMain(macro_map_UI2StateEffectDefs)
*macro_ptr_UI2StateEffectDefs = x0_22
*attrib_field_UI2Attrib = 0x64
*(attrib_field_UI2Attrib + 0x68) = 0x66
*(attrib_field_UI2Attrib + 0x70) = "type"
*(attrib_field_UI2Attrib + 0xa0) = gUIElementTypes
*(attrib_field_UI2Attrib + 0xd0) = 0x67
*(attrib_field_UI2Attrib + 0xd8) = "style"
*(attrib_field_UI2Attrib + 0x138) = 0x68
*(attrib_field_UI2Attrib + 0x140) = "ignoreStyleStates"
*(attrib_field_UI2Attrib + 0x1a0) = 0x6a
*(attrib_field_UI2Attrib + 0x1a8) = "placeholder_table"
*(attrib_field_UI2Attrib + 0x208) = 0x6b
*(attrib_field_UI2Attrib + 0x210) = "placeholder_rect"
*(attrib_field_UI2Attrib + 0x270) = 0x6c
*(attrib_field_UI2Attrib + 0x278) = "hiddenUpdate"
*(attrib_field_UI2Attrib + 0x2d8) = 0x69
*(attrib_field_UI2Attrib + 0x2e0) = "substates"
*(attrib_field_UI2Attrib + 0x2e8) = "UI2StateOverrides"
*(attrib_field_UI2Attrib + 0x340) = 0x6e
*(attrib_field_UI2Attrib + 0x348) = "stateEffects"
*(attrib_field_UI2Attrib + 0x350) = "UI2StateEffectDefs"
*(attrib_field_UI2Attrib + 0x418) = "forceState"
v0_1.d = fconvert.s(4f)
v0_1:4.d = fconvert.s(4f)
*(attrib_field_UI2Attrib + 0x3a8) = 0x6f
*(attrib_field_UI2Attrib + 0x3b0) = "editorState"
*(attrib_field_UI2Attrib + 0x410) = 0x70
*(attrib_field_UI2Attrib + 0x478) = 0x6d
*(attrib_field_UI2Attrib + 0x480) = "scale"
data_24b48c0 = v0_1
*(attrib_field_UI2Attrib + 0x4e0) = 0x71
*(attrib_field_UI2Attrib + 0x4e8) = "transitions"
*(attrib_field_UI2Attrib + 0x4f0) = "UI2Transition"
*(attrib_field_UI2Attrib + 0x548) = 0x72
*(attrib_field_UI2Attrib + 0x7b8) = 0x78
*(attrib_field_UI2Attrib + 0x590) = 0x76
*(attrib_field_UI2Attrib + 0x6e8) = 0x76
*(attrib_field_UI2Attrib + 0x6f0) = "rect"
*(attrib_field_UI2Attrib + 0x758) = "pageAlignment"
*(attrib_field_UI2Attrib + 0x820) = 0x79
*(attrib_field_UI2Attrib + 0x888) = 0x7a
*(attrib_field_UI2Attrib + 0x8f8) = "ignoreParentScale"
*(attrib_field_UI2Attrib + 0x7c0) = "groupAlignment"
*(attrib_field_UI2Attrib + 0x8f0) = 0x7b
*(attrib_field_UI2Attrib + 0x958) = 0x7c
*(attrib_field_UI2Attrib + 0x990) = &data_1180758
*(attrib_field_UI2Attrib + 0x5b0) = 0x73
*(attrib_field_UI2Attrib + 0x5f8) = 0x43480000
*(attrib_field_UI2Attrib + 0x618) = 0x74
*(attrib_field_UI2Attrib + 0x680) = 0x75
*(attrib_field_UI2Attrib + 0x750) = 0x77
*(attrib_field_UI2Attrib + 0x960) = "itemSize"
*(attrib_field_UI2Attrib + 0x9c0) = 0x7d
*(attrib_field_UI2Attrib + 0x9c8) = "itemStretch"
*(attrib_field_UI2Attrib + 0x9f8) = &data_11807b8
*(attrib_field_UI2Attrib + 0xa28) = 0x7e
*(attrib_field_UI2Attrib + 0xa30) = "alpha"
*(attrib_field_UI2Attrib + 0xa90) = 0x88
*(attrib_field_UI2Attrib + 0xb00) = "crop"
*(attrib_field_UI2Attrib + 0xb60) = 0x80
*(attrib_field_UI2Attrib + 0xaf8) = 0x7f
*(attrib_field_UI2Attrib + 0xb30) = &data_1180828
*(attrib_field_UI2Attrib + 0xbd0) = "uiLayer"
*(attrib_field_UI2Attrib + 0xbc8) = 0x85
*(attrib_field_UI2Attrib + 0xc30) = 0x86
*(attrib_field_UI2Attrib + 0xc38) = "uiLayerOffset"
*(attrib_field_UI2Attrib + 0xd48) = 0x3e8
*(attrib_field_UI2Attrib + 0xba8) = RECT1
*(attrib_field_UI2Attrib + 0xd00) = 0x65
*(attrib_field_UI2Attrib + 0xd68) = 0x89
*(attrib_field_UI2Attrib + 0xd70) = "hidden"
*(attrib_field_UI2Attrib + 0xe38) = 0x8b
*(attrib_field_UI2Attrib + 0xe40) = "minimized"
*(attrib_field_UI2Attrib + 0xea0) = 0x113
*(attrib_field_UI2Attrib + 0xb68) = "rectCropUVs"
*(attrib_field_UI2Attrib + 0xca0) = "hitLayer"
*(attrib_field_UI2Attrib + 0xf08) = 0x10b
*(attrib_field_UI2Attrib + 0xf48) = 0x18
*(attrib_field_UI2Attrib + 0xc98) = 0x87
*(attrib_field_UI2Attrib + 0xea8) = "particle"
*(attrib_field_UI2Attrib + 0xf10) = "flanim"
*(attrib_field_UI2Attrib + 0xdd0) = 0x8a
*(attrib_field_UI2Attrib + 0xdd8) = "locked"
*(attrib_field_UI2Attrib + 0xf70) = 0x10c
*(attrib_field_UI2Attrib + 0xf78) = "animName"
*(attrib_field_UI2Attrib + 0xfd8) = 0x10d
*(attrib_field_UI2Attrib + 0xfe0) = "spine"
*(attrib_field_UI2Attrib + 0x1040) = 0x10e
*(attrib_field_UI2Attrib + 0x10b0) = "spineAnimRate"
*(attrib_field_UI2Attrib + 0x1180) = "slots"
*(attrib_field_UI2Attrib + 0x11e8) = "slot"
*(attrib_field_UI2Attrib + 0x12b8) = "materialFn"
*(attrib_field_UI2Attrib + 0x1380) = 0x9e
*(attrib_field_UI2Attrib + 0x13e8) = 0x9f
*(attrib_field_UI2Attrib + 0x1450) = 0x8d
*(attrib_field_UI2Attrib + 0x14b8) = 0x8c
*(attrib_field_UI2Attrib + 0x1520) = 0x8e
*(attrib_field_UI2Attrib + 0x1528) = "imageColor"
*(attrib_field_UI2Attrib + 0x1018) = 0x23
*(attrib_field_UI2Attrib + 0x1588) = 0x81
*(attrib_field_UI2Attrib + 0x10a8) = 0x10f
*(attrib_field_UI2Attrib + 0x11e0) = 0x111
*(attrib_field_UI2Attrib + 0x1590) = "imageColorTL"
*(attrib_field_UI2Attrib + 0x15f0) = 0x82
*(attrib_field_UI2Attrib + 0x1048) = "spineLoop"
*(attrib_field_UI2Attrib + 0x1250) = "material"
*(attrib_field_UI2Attrib + 0x1110) = 0x112
*(attrib_field_UI2Attrib + 0x1318) = 0x91
*(attrib_field_UI2Attrib + 0x15f8) = "imageColorTR"
*(attrib_field_UI2Attrib + 0x1658) = 0x83
*(attrib_field_UI2Attrib + 0x1188) = "SpineSlotMappings"
*(attrib_field_UI2Attrib + 0x1388) = "model"
*(attrib_field_UI2Attrib + 0x1248) = 0x90
*(attrib_field_UI2Attrib + 0x12b0) = 0x90
*(attrib_field_UI2Attrib + 0x1660) = "imageColorBL"
*(attrib_field_UI2Attrib + 0x1078) = gAnimLoop
*(attrib_field_UI2Attrib + 0x13f0) = "modelAnim"
*(attrib_field_UI2Attrib + 0x16c0) = 0x84
*(attrib_field_UI2Attrib + 0x1320) = "useMaterialTime"
*(attrib_field_UI2Attrib + 0x1118) = "spineSkin"
*(attrib_field_UI2Attrib + 0x13c0) = 2
*(attrib_field_UI2Attrib + 0x1428) = 2
*(attrib_field_UI2Attrib + 0x1458) = "image2"
*(attrib_field_UI2Attrib + 0x16c8) = "imageColorBR"
*(attrib_field_UI2Attrib + 0x1568) = UI2ExprTree_gRgbaIWhite
*(attrib_field_UI2Attrib + 0x15d0) = UI2ExprTree_gRgbaIWhite
*(attrib_field_UI2Attrib + 0x1638) = UI2ExprTree_gRgbaIWhite
*(attrib_field_UI2Attrib + 0x16a0) = UI2ExprTree_gRgbaIWhite
*(attrib_field_UI2Attrib + 0x1708) = UI2ExprTree_gRgbaIWhite
*(attrib_field_UI2Attrib + 0x1728) = 0x8f
*(attrib_field_UI2Attrib + 8) = "name"
*(attrib_field_UI2Attrib + 0x10) = "DefString"
*(attrib_field_UI2Attrib + 0x550) = "field"
*(attrib_field_UI2Attrib + 0x18) = 0
*(attrib_field_UI2Attrib + 0x20) = 0
*(attrib_field_UI2Attrib + 0x30) = 0
*(attrib_field_UI2Attrib + 0x38) = 0
*(attrib_field_UI2Attrib + 0x28) = 0
*(attrib_field_UI2Attrib + 0x40) = 0
*(attrib_field_UI2Attrib + 0x48) = &data_793a18
*(attrib_field_UI2Attrib + 0x50) = 0
*(attrib_field_UI2Attrib + 0x58) = &data_793a18
*(attrib_field_UI2Attrib + 0x60) = 0
*(attrib_field_UI2Attrib + 0x78) = &data_746c1b
*(attrib_field_UI2Attrib + 0x80) = 0
*(attrib_field_UI2Attrib + 0x88) = 0
*(attrib_field_UI2Attrib + 0x90) = 0
*(attrib_field_UI2Attrib + 0x98) = 0
*(attrib_field_UI2Attrib + 0xa8) = 0
*(attrib_field_UI2Attrib + 0xb0) = 0
*(attrib_field_UI2Attrib + 0xc0) = &data_793a18
*(attrib_field_UI2Attrib + 0xc8) = 0
*(attrib_field_UI2Attrib + 0xe0) = "DefString"
*(attrib_field_UI2Attrib + 0xe8) = 0
*(attrib_field_UI2Attrib + 0xf0) = 0
*(attrib_field_UI2Attrib + 0x100) = 0
*(attrib_field_UI2Attrib + 0x108) = 0
*(attrib_field_UI2Attrib + 0x110) = 0
*(attrib_field_UI2Attrib + 0xf8) = 0
*(attrib_field_UI2Attrib + 0x118) = &data_793a18
*(attrib_field_UI2Attrib + 0x120) = 0
*(attrib_field_UI2Attrib + 0x128) = &data_793a18
*(attrib_field_UI2Attrib + 0x130) = 0
*(attrib_field_UI2Attrib + 0x148) = "bool"
*(attrib_field_UI2Attrib + 0x150) = 0
*(attrib_field_UI2Attrib + 0x158) = 0
*(attrib_field_UI2Attrib + 0x160) = 0
*(attrib_field_UI2Attrib + 0x168) = 0
*(attrib_field_UI2Attrib + 0x178) = 0
*(attrib_field_UI2Attrib + 0x170) = 0
*(attrib_field_UI2Attrib + 0x180) = 0
*(attrib_field_UI2Attrib + 0x188) = 0
*(attrib_field_UI2Attrib + 0x190) = &data_793a18
*(attrib_field_UI2Attrib + 0x198) = 0
*(attrib_field_UI2Attrib + 0x1b0) = "bool"
*(attrib_field_UI2Attrib + 0x1b8) = 0
*(attrib_field_UI2Attrib + 0x1c0) = 0
*(attrib_field_UI2Attrib + 0x1c8) = 0
*(attrib_field_UI2Attrib + 0x1d0) = 0
*(attrib_field_UI2Attrib + 0x1e0) = 0
*(attrib_field_UI2Attrib + 0x1d8) = 0
*(attrib_field_UI2Attrib + 0x1e8) = 0
*(attrib_field_UI2Attrib + 0x1f0) = 0
*(attrib_field_UI2Attrib + 0x1f8) = &data_793a18
*(attrib_field_UI2Attrib + 0x200) = 0
*(attrib_field_UI2Attrib + 0x218) = "bool"
*(attrib_field_UI2Attrib + 0x220) = 0
*(attrib_field_UI2Attrib + 0x228) = 0
*(attrib_field_UI2Attrib + 0x238) = 0
*(attrib_field_UI2Attrib + 0x230) = 0
*(attrib_field_UI2Attrib + 0x248) = 0
*(attrib_field_UI2Attrib + 0x240) = 0
*(attrib_field_UI2Attrib + 0x258) = 0
*(attrib_field_UI2Attrib + 0x250) = 0
*(attrib_field_UI2Attrib + 0x260) = &data_793a18
*(attrib_field_UI2Attrib + 0x268) = 0
*(attrib_field_UI2Attrib + 0x280) = "bool"
*(attrib_field_UI2Attrib + 0x288) = 0
*(attrib_field_UI2Attrib + 0x290) = 0
*(attrib_field_UI2Attrib + 0x2a0) = 0
*(attrib_field_UI2Attrib + 0x298) = 0
*(attrib_field_UI2Attrib + 0x2b0) = 0
*(attrib_field_UI2Attrib + 0x2a8) = 0
*(attrib_field_UI2Attrib + 0x2c0) = 0
*(attrib_field_UI2Attrib + 0x2b8) = 0
*(attrib_field_UI2Attrib + 0x2c8) = &data_793a18
*(attrib_field_UI2Attrib + 0x2d0) = 0
*(attrib_field_UI2Attrib + 0x2f0) = 0
*(attrib_field_UI2Attrib + 0x2f8) = 0
*(attrib_field_UI2Attrib + 0x308) = 0
*(attrib_field_UI2Attrib + 0x300) = 0
*(attrib_field_UI2Attrib + 0x318) = 0
*(attrib_field_UI2Attrib + 0x310) = 0
*(attrib_field_UI2Attrib + 0x328) = 0
*(attrib_field_UI2Attrib + 0x320) = 0
*(attrib_field_UI2Attrib + 0x330) = &data_793a18
*(attrib_field_UI2Attrib + 0x338) = 0
*(attrib_field_UI2Attrib + 0x358) = 0
*(attrib_field_UI2Attrib + 0x360) = 0
*(attrib_field_UI2Attrib + 0x370) = 0
*(attrib_field_UI2Attrib + 0x368) = 0
*(attrib_field_UI2Attrib + 0x380) = 0
*(attrib_field_UI2Attrib + 0x378) = 0
*(attrib_field_UI2Attrib + 0x390) = 0
*(attrib_field_UI2Attrib + 0x388) = 0
*(attrib_field_UI2Attrib + 0x398) = &data_793a18
*(attrib_field_UI2Attrib + 0x3a0) = 0
*(attrib_field_UI2Attrib + 0x3b8) = "DefString"
*(attrib_field_UI2Attrib + 0x3c0) = 0
*(attrib_field_UI2Attrib + 0x3c8) = 0
*(attrib_field_UI2Attrib + 0x3d8) = 0
*(attrib_field_UI2Attrib + 0x3d0) = 0
*(attrib_field_UI2Attrib + 0x3e8) = 0
*(attrib_field_UI2Attrib + 0x3e0) = 0
*(attrib_field_UI2Attrib + 0x3f0) = &data_793a18
*(attrib_field_UI2Attrib + 0x3f8) = 0
*(attrib_field_UI2Attrib + 0x400) = &data_793a18
*(attrib_field_UI2Attrib + 0x408) = 0
*(attrib_field_UI2Attrib + 0x420) = "DefString"
*(attrib_field_UI2Attrib + 0x428) = 0
*(attrib_field_UI2Attrib + 0x430) = 0
*(attrib_field_UI2Attrib + 0x440) = 0
*(attrib_field_UI2Attrib + 0x438) = 0
*(attrib_field_UI2Attrib + 0x450) = 0
*(attrib_field_UI2Attrib + 0x448) = 0
*(attrib_field_UI2Attrib + 0x458) = &data_793a18
*(attrib_field_UI2Attrib + 0x460) = 0
*(attrib_field_UI2Attrib + 0x468) = &data_793a18
*(attrib_field_UI2Attrib + 0x470) = 0
*(attrib_field_UI2Attrib + 0x488) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x490) = 0
*(attrib_field_UI2Attrib + 0x498) = 0
*(attrib_field_UI2Attrib + 0x4a8) = 0
*(attrib_field_UI2Attrib + 0x4a0) = 0
*(attrib_field_UI2Attrib + 0x4b8) = 0
*(attrib_field_UI2Attrib + 0x4b0) = 0
*(attrib_field_UI2Attrib + 0x4c0) = &data_11805b8
*(attrib_field_UI2Attrib + 0x4d0) = &data_793a18
*(attrib_field_UI2Attrib + 0x4d8) = 0
*(attrib_field_UI2Attrib + 0x4f8) = 0
*(attrib_field_UI2Attrib + 0x500) = 0
*(attrib_field_UI2Attrib + 0x510) = 0
*(attrib_field_UI2Attrib + 0x508) = 0
*(attrib_field_UI2Attrib + 0x520) = 0
*(attrib_field_UI2Attrib + 0x518) = 0
*(attrib_field_UI2Attrib + 0x530) = 0
*(attrib_field_UI2Attrib + 0x528) = 0
*(attrib_field_UI2Attrib + 0x538) = &data_793a18
*(attrib_field_UI2Attrib + 0x540) = 0
*(attrib_field_UI2Attrib + 0x558) = &data_746c1b
*(attrib_field_UI2Attrib + 0x560) = 0
*(attrib_field_UI2Attrib + 0x568) = 0
*(attrib_field_UI2Attrib + 0x578) = 0
*(attrib_field_UI2Attrib + 0x570) = 0
*(attrib_field_UI2Attrib + 0x580) = &data_11805c8
*(attrib_field_UI2Attrib + 0x588) = 0
*(attrib_field_UI2Attrib + 0x5a0) = &data_793a18
*(attrib_field_UI2Attrib + 0x5a8) = 0
*(attrib_field_UI2Attrib + 0x5b8) = "duration"
*(attrib_field_UI2Attrib + 0x5c0) = "float"
*(attrib_field_UI2Attrib + 0x5c8) = 0
*(attrib_field_UI2Attrib + 0x5d0) = 0
*(attrib_field_UI2Attrib + 0x5e0) = 0
*(attrib_field_UI2Attrib + 0x5d8) = 0
*(attrib_field_UI2Attrib + 0x5f0) = 0
*(attrib_field_UI2Attrib + 0x5e8) = 0
*(attrib_field_UI2Attrib + 0x600) = 0
*(attrib_field_UI2Attrib + 0x608) = &data_793a18
*(attrib_field_UI2Attrib + 0x610) = 0
*(attrib_field_UI2Attrib + 0x620) = "delay"
*(attrib_field_UI2Attrib + 0x628) = "float"
*(attrib_field_UI2Attrib + 0x630) = 0
*(attrib_field_UI2Attrib + 0x638) = 0
*(attrib_field_UI2Attrib + 0x648) = 0
*(attrib_field_UI2Attrib + 0x640) = 0
*(attrib_field_UI2Attrib + 0x658) = 0
*(attrib_field_UI2Attrib + 0x650) = 0
*(attrib_field_UI2Attrib + 0x668) = 0
*(attrib_field_UI2Attrib + 0x660) = 0
*(attrib_field_UI2Attrib + 0xb8) = 2
*(attrib_field_UI2Attrib + 0x670) = &data_793a18
*(attrib_field_UI2Attrib + 0x678) = 0
*(attrib_field_UI2Attrib + 0x688) = "curve"
*(attrib_field_UI2Attrib + 0x690) = &data_746c1b
*(attrib_field_UI2Attrib + 0x698) = 0
*(attrib_field_UI2Attrib + 0x6a0) = 0
*(attrib_field_UI2Attrib + 0x6b0) = 0
*(attrib_field_UI2Attrib + 0x6a8) = 0
*(attrib_field_UI2Attrib + 0x6b8) = gAnimCurve
*(attrib_field_UI2Attrib + 0x6c0) = 0
*(attrib_field_UI2Attrib + 0x6c8) = 4
*(attrib_field_UI2Attrib + 0x6d8) = &data_793a18
*(attrib_field_UI2Attrib + 0x6e0) = 0
*(attrib_field_UI2Attrib + 0x6f8) = "RectF"
*(attrib_field_UI2Attrib + 0x700) = 0
*(attrib_field_UI2Attrib + 0x708) = 0
*(attrib_field_UI2Attrib + 0x718) = 0
*(attrib_field_UI2Attrib + 0x710) = 0
*(attrib_field_UI2Attrib + 0x728) = 0
*(attrib_field_UI2Attrib + 0x720) = 0
*(attrib_field_UI2Attrib + 0x730) = RECT0
*(attrib_field_UI2Attrib + 0x738) = 0
*(attrib_field_UI2Attrib + 0x740) = &data_793a18
*(attrib_field_UI2Attrib + 0x748) = 0
*(attrib_field_UI2Attrib + 0x760) = "UIRectAlignment"
*(attrib_field_UI2Attrib + 0x768) = 0
*(attrib_field_UI2Attrib + 0x770) = 0
*(attrib_field_UI2Attrib + 0x780) = 0
*(attrib_field_UI2Attrib + 0x778) = 0
*(attrib_field_UI2Attrib + 0x790) = 0
*(attrib_field_UI2Attrib + 0x4c8) = 0x40
*(attrib_field_UI2Attrib + 0x598) = 2
*(attrib_field_UI2Attrib + 0x6d0) = 2
*(attrib_field_UI2Attrib + 0x1730) = "imageColorAdditive"
*(attrib_field_UI2Attrib + 0x1868) = "overrideLastRow"
*(attrib_field_UI2Attrib + 0x18d0) = "centerLastRow"
*(attrib_field_UI2Attrib + 0x2200) = &data_1180898
*(attrib_field_UI2Attrib + 0x828) = "itemAlignment"
*(attrib_field_UI2Attrib + 0x868) = 5
*(attrib_field_UI2Attrib + 0x890) = "itemScaling"
*(attrib_field_UI2Attrib + 0x7b0) = 0
*(attrib_field_UI2Attrib + 0x818) = 0
*(attrib_field_UI2Attrib + 0x880) = 0
*(attrib_field_UI2Attrib + 0x8c0) = &data_1180648
*(attrib_field_UI2Attrib + 0x8e8) = 0
*(attrib_field_UI2Attrib + 0x950) = 0
*(attrib_field_UI2Attrib + 0x9b8) = 0
*(attrib_field_UI2Attrib + 0xa20) = 0
*(attrib_field_UI2Attrib + 0x11d8) = 0
*(attrib_field_UI2Attrib + 0x1178) = 0x110
*(attrib_field_UI2Attrib + 0x1170) = 0
*(attrib_field_UI2Attrib + 0x1160) = 0
*(attrib_field_UI2Attrib + 0x1108) = 0
*(attrib_field_UI2Attrib + 0x10f8) = 0
*(attrib_field_UI2Attrib + 0x10a0) = 0
*(attrib_field_UI2Attrib + 0xa78) = 0
*(attrib_field_UI2Attrib + 0xa80) = &data_793a18
*(attrib_field_UI2Attrib + 0xa88) = 0
*(attrib_field_UI2Attrib + 0xa98) = "innerScale"
*(attrib_field_UI2Attrib + 0x1038) = 0
*(attrib_field_UI2Attrib + 0x1030) = &data_793a18
*(attrib_field_UI2Attrib + 0x1020) = 0
*(attrib_field_UI2Attrib + 0x1028) = 0
*(attrib_field_UI2Attrib + 0xaa0) = "float"
*(attrib_field_UI2Attrib + 0x1010) = 0
*(attrib_field_UI2Attrib + 0x1000) = 0
*(attrib_field_UI2Attrib + 0x1008) = 0
*(attrib_field_UI2Attrib + 0xff8) = 0
*(attrib_field_UI2Attrib + 0xff0) = 0
*(attrib_field_UI2Attrib + 0xaa8) = 0
*(attrib_field_UI2Attrib + 0xab0) = 0
*(attrib_field_UI2Attrib + 0xac0) = 0
*(attrib_field_UI2Attrib + 0xfd0) = 0
*(attrib_field_UI2Attrib + 0xfc8) = &data_793a18
*(attrib_field_UI2Attrib + 0xfc0) = 0
*(attrib_field_UI2Attrib + 0xfb8) = &data_793a18
*(attrib_field_UI2Attrib + 0xfa8) = 0
*(attrib_field_UI2Attrib + 0xfb0) = 0
*(attrib_field_UI2Attrib + 0xf98) = 0
*(attrib_field_UI2Attrib + 0xfa0) = 0
*(attrib_field_UI2Attrib + 0xf90) = 0
*(attrib_field_UI2Attrib + 0xf88) = 0
*(attrib_field_UI2Attrib + 0xf80) = "DefString"
*(attrib_field_UI2Attrib + 0xab8) = 0
*(attrib_field_UI2Attrib + 0xad0) = 0
*(attrib_field_UI2Attrib + 0x1500) = &data_1180898
*(attrib_field_UI2Attrib + 0x18a8) = &data_1180898
*(attrib_field_UI2Attrib + 0xf68) = 0
*(attrib_field_UI2Attrib + 0xfe8) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0xf60) = &data_793a18
*(attrib_field_UI2Attrib + 0xf50) = 0
*(attrib_field_UI2Attrib + 0xf58) = 0
*(attrib_field_UI2Attrib + 0xac8) = 0
*(attrib_field_UI2Attrib + 0xf40) = 0
*(attrib_field_UI2Attrib + 0xf30) = 0
*(attrib_field_UI2Attrib + 0x1770) = UI2ExprTree_gRgbaINone
*(attrib_field_UI2Attrib + 0x1790) = 0xc9
*(attrib_field_UI2Attrib + 0x1798) = "rows"
*(attrib_field_UI2Attrib + 0x17f8) = 0xca
*(attrib_field_UI2Attrib + 0x1800) = "cols"
*(attrib_field_UI2Attrib + 0x1860) = 0xcc
*(attrib_field_UI2Attrib + 0x18c8) = 0xcd
*(attrib_field_UI2Attrib + 0x1930) = 0xcb
*(attrib_field_UI2Attrib + 0x1978) = &data_11808a8
*(attrib_field_UI2Attrib + 0x1998) = 0xce
*(attrib_field_UI2Attrib + 0x1a00) = 0xcf
*(attrib_field_UI2Attrib + 0x1a68) = 0xd0
*(attrib_field_UI2Attrib + 0x1ad0) = 0xd3
*(attrib_field_UI2Attrib + 0x1b40) = "tableOffset"
*(attrib_field_UI2Attrib + 0x1ba0) = 0xd1
*(attrib_field_UI2Attrib + 0x1ba8) = "scrollType"
*(attrib_field_UI2Attrib + 0x1bd8) = &data_1180938
*(attrib_field_UI2Attrib + 0x1c08) = 0x92
*(attrib_field_UI2Attrib + 0x1c70) = 0x93
*(attrib_field_UI2Attrib + 0x1c78) = "rotation"
*(attrib_field_UI2Attrib + 0x1cd8) = 0xd2
*(attrib_field_UI2Attrib + 0x1ce0) = "scrollBar"
*(attrib_field_UI2Attrib + 0x1d40) = 0x94
*(attrib_field_UI2Attrib + 0x1d48) = "flipAnimRows"
*(attrib_field_UI2Attrib + 0x1da8) = 0x95
*(attrib_field_UI2Attrib + 0x1db0) = "flipAnimCols"
*(attrib_field_UI2Attrib + 0x1df0) = 1
*(attrib_field_UI2Attrib + 0x17d8) = &data_11805b8
*(attrib_field_UI2Attrib + 0x1d88) = 1
*(attrib_field_UI2Attrib + 0x1e10) = 0x96
*(attrib_field_UI2Attrib + 0x1e18) = "flipAnimDuration"
*(attrib_field_UI2Attrib + 0x1e78) = 0x97
*(attrib_field_UI2Attrib + 0x1e80) = "flipAnimStyle"
*(attrib_field_UI2Attrib + 0x1eb0) = &data_1180a18
*(attrib_field_UI2Attrib + 0x1ee0) = 0x98
*(attrib_field_UI2Attrib + 0x1ee8) = "loopThickness"
*(attrib_field_UI2Attrib + 0x1f28) = 0x42480000
*(attrib_field_UI2Attrib + 0x1f48) = 0x99
*(attrib_field_UI2Attrib + 0x1f50) = "loopRadius"
*(attrib_field_UI2Attrib + 0x1fb0) = 0x9a
*(attrib_field_UI2Attrib + 0x1fb8) = "loopRepeats"
*(attrib_field_UI2Attrib + 0x2018) = 0x9b
*(attrib_field_UI2Attrib + 0x2020) = "loopSpeed"
*(attrib_field_UI2Attrib + 0x2080) = 0x9c
*(attrib_field_UI2Attrib + 0x2088) = "loopPhaseType"
*(attrib_field_UI2Attrib + 0x20b8) = &data_1180a88
*(attrib_field_UI2Attrib + 0x20e8) = 0x9d
*(attrib_field_UI2Attrib + 0x20f0) = "loopPhaseValue"
*(attrib_field_UI2Attrib + 0x2150) = 0xc8
*(attrib_field_UI2Attrib + 0x21b8) = 0xd5
*(attrib_field_UI2Attrib + 0x21c0) = "text"
*(attrib_field_UI2Attrib + 0x2220) = 0xd6
*(attrib_field_UI2Attrib + 0x2288) = 0xd7
*(attrib_field_UI2Attrib + 0x2290) = "ttfont"
*(attrib_field_UI2Attrib + 0x22c8) = 0x25
*(attrib_field_UI2Attrib + 0x22f0) = 0xd8
*(attrib_field_UI2Attrib + 0x22f8) = "ttfontPixelHeight"
*(attrib_field_UI2Attrib + 0x2338) = 0x42000000
*(attrib_field_UI2Attrib + 0x2358) = 0xd9
*(attrib_field_UI2Attrib + 0x2360) = "textColor"
*(attrib_field_UI2Attrib + 0x23c0) = 0xda
*(attrib_field_UI2Attrib + 0x23c8) = "textColorOutline"
*(attrib_field_UI2Attrib + 0x2428) = 0xdb
*(attrib_field_UI2Attrib + 0x2498) = "localizationKey"
*(attrib_field_UI2Attrib + 0x24f8) = 0xdd
*(attrib_field_UI2Attrib + 0x2500) = "localizationSuffixes"
*(attrib_field_UI2Attrib + 0x2508) = "UI2LocalizationSuffixes"
*(attrib_field_UI2Attrib + 0x2560) = 0xde
*(attrib_field_UI2Attrib + 0x2568) = "textScale"
*(attrib_field_UI2Attrib + 0x25c8) = 0xdf
*(attrib_field_UI2Attrib + 0x2630) = 0xe0
*(attrib_field_UI2Attrib + 0x2698) = 0xe1
*(attrib_field_UI2Attrib + 0x26a0) = "smallCaps"
*(attrib_field_UI2Attrib + 0xa70) = 0x3f800000
*(attrib_field_UI2Attrib + 0x1840) = &data_11805b8
*(attrib_field_UI2Attrib + 0xf38) = 0
*(attrib_field_UI2Attrib + 0x10f0) = 0x3f800000
*(attrib_field_UI2Attrib + 0xad8) = 0x3f800000
*(attrib_field_UI2Attrib + 0x2708) = "allCaps"
*(attrib_field_UI2Attrib + 0x2768) = 0xe3
*(attrib_field_UI2Attrib + 0x2770) = "letterSpacing"
*(attrib_field_UI2Attrib + 0x27d8) = "lineSpacing"
*(attrib_field_UI2Attrib + 0x2838) = 0xe5
*(attrib_field_UI2Attrib + 0xf28) = 0
*(attrib_field_UI2Attrib + 0x14c8) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1530) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1598) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1600) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1668) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x16d0) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1738) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x17a0) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1808) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1870) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x1940) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0x21c8) = "UI2ExprTreeDef"
*(attrib_field_UI2Attrib + 0xf20) = 0
*(attrib_field_UI2Attrib + 0x788) = 0
*(attrib_field_UI2Attrib + 0x7a0) = 0
*(attrib_field_UI2Attrib + 0x798) = 0
*(attrib_field_UI2Attrib + 0x7a8) = &data_793a18
*(attrib_field_UI2Attrib + 0x7c8) = "UIRectAlignment"
*(attrib_field_UI2Attrib + 0x7d0) = 0
*(attrib_field_UI2Attrib + 0x7d8) = 0
*(attrib_field_UI2Attrib + 0x7e8) = 0
*(attrib_field_UI2Attrib + 0x7e0) = 0
*(attrib_field_UI2Attrib + 0x7f8) = 0
*(attrib_field_UI2Attrib + 0x7f0) = 0
*(attrib_field_UI2Attrib + 0x808) = 0
*(attrib_field_UI2Attrib + 0x800) = 0
*(attrib_field_UI2Attrib + 0x810) = &data_793a18
*(attrib_field_UI2Attrib + 0x830) = &data_746c1b
*(attrib_field_UI2Attrib + 0x838) = 0
*(attrib_field_UI2Attrib + 0x840) = 0
*(attrib_field_UI2Attrib + 0x850) = 0
*(attrib_field_UI2Attrib + 0x848) = 0
*(attrib_field_UI2Attrib + 0x858) = gTextAlignment
*(attrib_field_UI2Attrib + 0x860) = 0
*(attrib_field_UI2Attrib + 0x878) = &data_793a18
*(attrib_field_UI2Attrib + 0x898) = &data_746c1b
*(attrib_field_UI2Attrib + 0x8a0) = 0
*(attrib_field_UI2Attrib + 0x8a8) = 0
*(attrib_field_UI2Attrib + 0x8b8) = 0
*(attrib_field_UI2Attrib + 0x8b0) = 0
*(attrib_field_UI2Attrib + 0x8c8) = 0
*(attrib_field_UI2Attrib + 0x8d0) = 0
*(attrib_field_UI2Attrib + 0x8e0) = &data_793a18
*(attrib_field_UI2Attrib + 0x900) = "bool"
*(attrib_field_UI2Attrib + 0x908) = 0
*(attrib_field_UI2Attrib + 0x910) = 0
*(attrib_field_UI2Attrib + 0x920) = 0
*(attrib_field_UI2Attrib + 0x918) = 0
*(attrib_field_UI2Attrib + 0x930) = 0
*(attrib_field_UI2Attrib + 0x928) = 0
*(attrib_field_UI2Attrib + 0x940) = 0
*(attrib_field_UI2Attrib + 0x938) = 0
*(attrib_field_UI2Attrib + 0x948) = &data_793a18
*(attrib_field_UI2Attrib + 0x968) = &data_746c1b
*(attrib_field_UI2Attrib + 0x970) = 0
*(attrib_field_UI2Attrib + 0x978) = 0
*(attrib_field_UI2Attrib + 0x988) = 0
*(attrib_field_UI2Attrib + 0x980) = 0
*(attrib_field_UI2Attrib + 0x998) = 0
*(attrib_field_UI2Attrib + 0x9a0) = 0
*(attrib_field_UI2Attrib + 0x9b0) = &data_793a18
*(attrib_field_UI2Attrib + 0x9d0) = &data_746c1b
*(attrib_field_UI2Attrib + 0x9d8) = 0
*(attrib_field_UI2Attrib + 0x9e0) = 0
*(attrib_field_UI2Attrib + 0x9f0) = 0
*(attrib_field_UI2Attrib + 0x9e8) = 0
*(attrib_field_UI2Attrib + 0xa00) = 0
*(attrib_field_UI2Attrib + 0xa08) = 0
*(attrib_field_UI2Attrib + 0xa18) = &data_793a18
*(attrib_field_UI2Attrib + 0x11d0) = &data_793a18
*(attrib_field_UI2Attrib + 0x11c0) = 0
*(attrib_field_UI2Attrib + 0x11c8) = 0
*(attrib_field_UI2Attrib + 0x11b0) = 0
*(attrib_field_UI2Attrib + 0x11b8) = 0
*(attrib_field_UI2Attrib + 0x11a0) = 0
*(attrib_field_UI2Attrib + 0x11a8) = 0
*(attrib_field_UI2Attrib + 0x1198) = 0
*(attrib_field_UI2Attrib + 0x1190) = 0
*(attrib_field_UI2Attrib + 0xa38) = "float"
*(attrib_field_UI2Attrib + 0xa40) = 0
*(attrib_field_UI2Attrib + 0xa48) = 0
*(attrib_field_UI2Attrib + 0x1168) = &data_793a18
*(attrib_field_UI2Attrib + 0x1158) = &data_793a18
*(attrib_field_UI2Attrib + 0x1148) = 0
*(attrib_field_UI2Attrib + 0x1150) = 0
*(attrib_field_UI2Attrib + 0x1138) = 0
*(attrib_field_UI2Attrib + 0x1140) = 0
*(attrib_field_UI2Attrib + 0x1130) = 0
*(attrib_field_UI2Attrib + 0x1128) = 0
*(attrib_field_UI2Attrib + 0x1120) = "DefString"
*(attrib_field_UI2Attrib + 0xa58) = 0
*(attrib_field_UI2Attrib + 0xa50) = 0
*(attrib_field_UI2Attrib + 0x1100) = &data_793a18
*(attrib_field_UI2Attrib + 0xa68) = 0
*(attrib_field_UI2Attrib + 0x10e0) = 0
*(attrib_field_UI2Attrib + 0x10e8) = 0
*(attrib_field_UI2Attrib + 0x10d0) = 0
*(attrib_field_UI2Attrib + 0x10d8) = 0
*(attrib_field_UI2Attrib + 0x10c8) = 0
*(attrib_field_UI2Attrib + 0x10c0) = 0
*(attrib_field_UI2Attrib + 0x10b8) = "float"
*(attrib_field_UI2Attrib + 0xa60) = 0
*(attrib_field_UI2Attrib + 0x1098) = &data_793a18
*(attrib_field_UI2Attrib + 0x1090) = 2
*(attrib_field_UI2Attrib + 0x1088) = 0
*(attrib_field_UI2Attrib + 0x1080) = 0
*(attrib_field_UI2Attrib + 0x1068) = 0
*(attrib_field_UI2Attrib + 0x1070) = 0
*(attrib_field_UI2Attrib + 0x1060) = 0
*(attrib_field_UI2Attrib + 0x1058) = 0
*(attrib_field_UI2Attrib + 0x1050) = &data_746c1b
*(attrib_field_UI2Attrib + 0xf18) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0xae0) = 0
*(attrib_field_UI2Attrib + 0xf00) = 0
*(attrib_field_UI2Attrib + 0xef8) = &data_793a18
*(attrib_field_UI2Attrib + 0xee8) = 0
*(attrib_field_UI2Attrib + 0xef0) = 0
*(attrib_field_UI2Attrib + 0xae8) = &data_793a18
*(attrib_field_UI2Attrib + 0xee0) = 0x19
*(attrib_field_UI2Attrib + 0xed8) = 0
*(attrib_field_UI2Attrib + 0xec8) = 0
*(attrib_field_UI2Attrib + 0xed0) = 0
*(attrib_field_UI2Attrib + 0xec0) = 0
*(attrib_field_UI2Attrib + 0xeb8) = 0
*(attrib_field_UI2Attrib + 0xeb0) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0xaf0) = 0
*(attrib_field_UI2Attrib + 0xb08) = &data_746c1b
*(attrib_field_UI2Attrib + 0xe98) = 0
*(attrib_field_UI2Attrib + 0xe90) = &data_793a18
*(attrib_field_UI2Attrib + 0xe80) = 0
*(attrib_field_UI2Attrib + 0xe88) = 0
*(attrib_field_UI2Attrib + 0xe70) = 0
*(attrib_field_UI2Attrib + 0xe78) = 0
*(attrib_field_UI2Attrib + 0xe60) = 0
*(attrib_field_UI2Attrib + 0xe68) = 0
*(attrib_field_UI2Attrib + 0xe58) = 0
*(attrib_field_UI2Attrib + 0xe50) = 0
*(attrib_field_UI2Attrib + 0xe48) = "bool"
*(attrib_field_UI2Attrib + 0xb10) = 0
*(attrib_field_UI2Attrib + 0xb18) = 0
*(attrib_field_UI2Attrib + 0xe30) = 0
*(attrib_field_UI2Attrib + 0xe28) = &data_793a18
*(attrib_field_UI2Attrib + 0xe18) = 0
*(attrib_field_UI2Attrib + 0xe20) = 0
*(attrib_field_UI2Attrib + 0xe08) = 0
*(attrib_field_UI2Attrib + 0xe10) = 0
*(attrib_field_UI2Attrib + 0xdf8) = 0
*(attrib_field_UI2Attrib + 0xe00) = 0
*(attrib_field_UI2Attrib + 0xdf0) = 0
*(attrib_field_UI2Attrib + 0xde8) = 0
*(attrib_field_UI2Attrib + 0xde0) = "bool"
*(attrib_field_UI2Attrib + 0xb28) = 0
*(attrib_field_UI2Attrib + 0xb20) = 0
*(attrib_field_UI2Attrib + 0xdc8) = 0
*(attrib_field_UI2Attrib + 0xdc0) = &data_793a18
*(attrib_field_UI2Attrib + 0xdb0) = 0
*(attrib_field_UI2Attrib + 0xdb8) = 0
*(attrib_field_UI2Attrib + 0xda0) = 0
*(attrib_field_UI2Attrib + 0xda8) = 0
*(attrib_field_UI2Attrib + 0xd90) = 0
*(attrib_field_UI2Attrib + 0xd98) = 0
*(attrib_field_UI2Attrib + 0xd88) = 0
*(attrib_field_UI2Attrib + 0xd80) = 0
*(attrib_field_UI2Attrib + 0xd78) = "bool"
*(attrib_field_UI2Attrib + 0xb38) = 0
*(attrib_field_UI2Attrib + 0xb40) = 0
*(attrib_field_UI2Attrib + 0xd60) = 0
*(attrib_field_UI2Attrib + 0xd58) = &data_793a18
*(attrib_field_UI2Attrib + 0xd50) = 0
*(attrib_field_UI2Attrib + 0xb50) = &data_793a18
*(attrib_field_UI2Attrib + 0xd38) = 0
*(attrib_field_UI2Attrib + 0xd40) = 0
*(attrib_field_UI2Attrib + 0xd28) = 0
*(attrib_field_UI2Attrib + 0xd30) = 0
*(attrib_field_UI2Attrib + 0xd20) = 0
*(attrib_field_UI2Attrib + 0xd18) = 0
*(attrib_field_UI2Attrib + 0xd10) = &data_746c1b
*(attrib_field_UI2Attrib + 0xd08) = "duration"
*(attrib_field_UI2Attrib + 0xb58) = 0
*(attrib_field_UI2Attrib + 0xcf8) = 0
*(attrib_field_UI2Attrib + 0xcf0) = &data_793a18
*(attrib_field_UI2Attrib + 0xce0) = 0
*(attrib_field_UI2Attrib + 0xce8) = 0
*(attrib_field_UI2Attrib + 0xcd0) = 0
*(attrib_field_UI2Attrib + 0xcd8) = 0
*(attrib_field_UI2Attrib + 0xcc0) = 0
*(attrib_field_UI2Attrib + 0xcc8) = 0
*(attrib_field_UI2Attrib + 0xcb8) = 0
*(attrib_field_UI2Attrib + 0xcb0) = 0
*(attrib_field_UI2Attrib + 0xca8) = &data_746c1b
*(attrib_field_UI2Attrib + 0xb70) = "RectF"
*(attrib_field_UI2Attrib + 0xb78) = 0
*(attrib_field_UI2Attrib + 0xc90) = 0
*(attrib_field_UI2Attrib + 0xc88) = &data_793a18
*(attrib_field_UI2Attrib + 0xc78) = 0
*(attrib_field_UI2Attrib + 0xc80) = 0
*(attrib_field_UI2Attrib + 0xc68) = 0
*(attrib_field_UI2Attrib + 0xc70) = 0
*(attrib_field_UI2Attrib + 0xc58) = 0
*(attrib_field_UI2Attrib + 0xc60) = 0
*(attrib_field_UI2Attrib + 0xc50) = 0
*(attrib_field_UI2Attrib + 0xc48) = 0
*(attrib_field_UI2Attrib + 0xc40) = &data_746c1b
*(attrib_field_UI2Attrib + 0xb80) = 0
*(attrib_field_UI2Attrib + 0xb90) = 0
*(attrib_field_UI2Attrib + 0xc28) = 0
*(attrib_field_UI2Attrib + 0xc20) = &data_793a18
*(attrib_field_UI2Attrib + 0xc10) = 0
*(attrib_field_UI2Attrib + 0xc18) = 0
*(attrib_field_UI2Attrib + 0xc00) = 0
*(attrib_field_UI2Attrib + 0xc08) = 0
*(attrib_field_UI2Attrib + 0xbf0) = 0
*(attrib_field_UI2Attrib + 0xbf8) = 0
*(attrib_field_UI2Attrib + 0xbe8) = 0
*(attrib_field_UI2Attrib + 0xbe0) = 0
*(attrib_field_UI2Attrib + 0xbd8) = &data_746c1b
*(attrib_field_UI2Attrib + 0xb88) = 0
*(attrib_field_UI2Attrib + 0xba0) = 0
*(attrib_field_UI2Attrib + 0xbc0) = 0
*(attrib_field_UI2Attrib + 0xbb8) = &data_793a18
*(attrib_field_UI2Attrib + 0xbb0) = 0
*(attrib_field_UI2Attrib + 0xb98) = 0
*(attrib_field_UI2Attrib + 0x11f0) = "DefString"
*(attrib_field_UI2Attrib + 0x11f8) = 0
*(attrib_field_UI2Attrib + 0x1200) = 0
*(attrib_field_UI2Attrib + 0x1210) = 0
*(attrib_field_UI2Attrib + 0x1208) = 0
*(attrib_field_UI2Attrib + 0x1220) = 0
*(attrib_field_UI2Attrib + 0x1218) = 0
*(attrib_field_UI2Attrib + 0x1228) = &data_793a18
*(attrib_field_UI2Attrib + 0x1230) = 0
*(attrib_field_UI2Attrib + 0x1238) = &data_793a18
*(attrib_field_UI2Attrib + 0x1240) = 0
*(attrib_field_UI2Attrib + 0xb48) = 2
*(attrib_field_UI2Attrib + 0x1258) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1260) = 0
*(attrib_field_UI2Attrib + 0x1268) = 0
*(attrib_field_UI2Attrib + 0x1278) = 0
*(attrib_field_UI2Attrib + 0x1270) = 0
*(attrib_field_UI2Attrib + 0x1288) = 0
*(attrib_field_UI2Attrib + 0x1280) = 0
*(attrib_field_UI2Attrib + 0x1298) = 0
*(attrib_field_UI2Attrib + 0x1290) = 0
*(attrib_field_UI2Attrib + 0x12a0) = &data_793a18
*(attrib_field_UI2Attrib + 0x12a8) = 0
*(attrib_field_UI2Attrib + 0x12c0) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x12c8) = 0
*(attrib_field_UI2Attrib + 0x12d0) = 0
*(attrib_field_UI2Attrib + 0x12e0) = 0
*(attrib_field_UI2Attrib + 0x12d8) = 0
*(attrib_field_UI2Attrib + 0x12f0) = 0
*(attrib_field_UI2Attrib + 0x12e8) = 0
*(attrib_field_UI2Attrib + 0x1300) = 0
*(attrib_field_UI2Attrib + 0x12f8) = 0
*(attrib_field_UI2Attrib + 0x1308) = &data_793a18
*(attrib_field_UI2Attrib + 0x1310) = 0
*(attrib_field_UI2Attrib + 0x1328) = "bool"
*(attrib_field_UI2Attrib + 0x1330) = 0
*(attrib_field_UI2Attrib + 0x1338) = 0
*(attrib_field_UI2Attrib + 0x1348) = 0
*(attrib_field_UI2Attrib + 0x1340) = 0
*(attrib_field_UI2Attrib + 0x1358) = 0
*(attrib_field_UI2Attrib + 0x1350) = 0
*(attrib_field_UI2Attrib + 0x1368) = 0
*(attrib_field_UI2Attrib + 0x1360) = 0
*(attrib_field_UI2Attrib + 0x1370) = &data_793a18
*(attrib_field_UI2Attrib + 0x1378) = 0
*(attrib_field_UI2Attrib + 0x1390) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1398) = 0
*(attrib_field_UI2Attrib + 0x13a0) = 0
*(attrib_field_UI2Attrib + 0x13b0) = 0
*(attrib_field_UI2Attrib + 0x13a8) = 0
*(attrib_field_UI2Attrib + 0xa10) = 2
*(attrib_field_UI2Attrib + 0x13b8) = 0
*(attrib_field_UI2Attrib + 0x13d0) = 0
*(attrib_field_UI2Attrib + 0x13c8) = 0
*(attrib_field_UI2Attrib + 0x13d8) = &data_793a18
*(attrib_field_UI2Attrib + 0x13e0) = 0
*(attrib_field_UI2Attrib + 0x13f8) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1400) = 0
*(attrib_field_UI2Attrib + 0x1408) = 0
*(attrib_field_UI2Attrib + 0x1418) = 0
*(attrib_field_UI2Attrib + 0x1410) = 0
*(attrib_field_UI2Attrib + 0x1420) = 0
*(attrib_field_UI2Attrib + 0x1438) = 0
*(attrib_field_UI2Attrib + 0x9a8) = 2
*(attrib_field_UI2Attrib + 0x1430) = 0
*(attrib_field_UI2Attrib + 0x1440) = &data_793a18
*(attrib_field_UI2Attrib + 0x1448) = 0
*(attrib_field_UI2Attrib + 0x1460) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1468) = 0
*(attrib_field_UI2Attrib + 0x1470) = 0
*(attrib_field_UI2Attrib + 0x1480) = 0
*(attrib_field_UI2Attrib + 0x1478) = 0
*(attrib_field_UI2Attrib + 0x1488) = 0
*(attrib_field_UI2Attrib + 0x1490) = 3
*(attrib_field_UI2Attrib + 0x14a0) = 0
*(attrib_field_UI2Attrib + 0x1498) = 0
*(attrib_field_UI2Attrib + 0x14a8) = &data_793a18
*(attrib_field_UI2Attrib + 0x14b0) = 0
*(attrib_field_UI2Attrib + 0x14c0) = "image"
*(attrib_field_UI2Attrib + 0x14d0) = 0
*(attrib_field_UI2Attrib + 0x14d8) = 0
*(attrib_field_UI2Attrib + 0x14e8) = 0
*(attrib_field_UI2Attrib + 0x14e0) = 0
*(attrib_field_UI2Attrib + 0x14f8) = 0
*(attrib_field_UI2Attrib + 0x14f0) = 0
*(attrib_field_UI2Attrib + 0x1510) = &data_793a18
*(attrib_field_UI2Attrib + 0x1518) = 0
*(attrib_field_UI2Attrib + 0x1538) = 0
*(attrib_field_UI2Attrib + 0x1540) = 0
*(attrib_field_UI2Attrib + 0x1550) = 0
*(attrib_field_UI2Attrib + 0x1548) = 0
*(attrib_field_UI2Attrib + 0x8d8) = 2
*(attrib_field_UI2Attrib + 0x1560) = 0
*(attrib_field_UI2Attrib + 0x1558) = 0
*(attrib_field_UI2Attrib + 0x1578) = &data_793a18
*(attrib_field_UI2Attrib + 0x1580) = 0
*(attrib_field_UI2Attrib + 0x15a0) = 0
*(attrib_field_UI2Attrib + 0x15a8) = 0
*(attrib_field_UI2Attrib + 0x15b8) = 0
*(attrib_field_UI2Attrib + 0x15b0) = 0
*(attrib_field_UI2Attrib + 0x15c8) = 0
*(attrib_field_UI2Attrib + 0x15c0) = 0
*(attrib_field_UI2Attrib + 0x15e0) = &data_793a18
*(attrib_field_UI2Attrib + 0x15e8) = 0
*(attrib_field_UI2Attrib + 0x870) = 2
*(attrib_field_UI2Attrib + 0x1608) = 0
*(attrib_field_UI2Attrib + 0x1610) = 0
*(attrib_field_UI2Attrib + 0x1620) = 0
*(attrib_field_UI2Attrib + 0x1618) = 0
*(attrib_field_UI2Attrib + 0x1630) = 0
*(attrib_field_UI2Attrib + 0x1628) = 0
*(attrib_field_UI2Attrib + 0x1648) = &data_793a18
*(attrib_field_UI2Attrib + 0x1650) = 0
*(attrib_field_UI2Attrib + 0x1670) = 0
*(attrib_field_UI2Attrib + 0x1678) = 0
*(attrib_field_UI2Attrib + 0x1688) = 0
*(attrib_field_UI2Attrib + 0x1680) = 0
*(attrib_field_UI2Attrib + 0x1698) = 0
*(attrib_field_UI2Attrib + 0x1690) = 0
*(attrib_field_UI2Attrib + 0x16b0) = &data_793a18
*(attrib_field_UI2Attrib + 0x16b8) = 0
*(attrib_field_UI2Attrib + 0x16d8) = 0
*(attrib_field_UI2Attrib + 0x16e0) = 0
*(attrib_field_UI2Attrib + 0x16f0) = 0
*(attrib_field_UI2Attrib + 0x16e8) = 0
*(attrib_field_UI2Attrib + 0x1700) = 0
*(attrib_field_UI2Attrib + 0x16f8) = 0
*(attrib_field_UI2Attrib + 0x1718) = &data_793a18
*(attrib_field_UI2Attrib + 0x1720) = 0
*(attrib_field_UI2Attrib + 0x1508) = 0x40
*(attrib_field_UI2Attrib + 0x1570) = 0x40
*(attrib_field_UI2Attrib + 0x15d8) = 0x40
*(attrib_field_UI2Attrib + 0x1640) = 0x40
*(attrib_field_UI2Attrib + 0x16a8) = 0x40
*(attrib_field_UI2Attrib + 0x1710) = 0x40
*(attrib_field_UI2Attrib + 0x26d8) = 0
*(attrib_field_UI2Attrib + 0x2700) = 0xe2
*(attrib_field_UI2Attrib + 0x2840) = "language"
*(attrib_field_UI2Attrib + 0x2870) = gLanguage
*(attrib_field_UI2Attrib + 0x28a0) = 0xe6
*(attrib_field_UI2Attrib + 0x28a8) = "textPadding"
*(attrib_field_UI2Attrib + 0x2908) = 0xe7
*(attrib_field_UI2Attrib + 0x2910) = "textAutoscale"
*(attrib_field_UI2Attrib + 0x2940) = &data_1180b48
*(attrib_field_UI2Attrib + 0x2978) = "canEdit"
*(attrib_field_UI2Attrib + 0x29d8) = 0xe9
*(attrib_field_UI2Attrib + 0x29e0) = "continualInput"
*(attrib_field_UI2Attrib + 0x2a40) = 0xea
*(attrib_field_UI2Attrib + 0x2a48) = "autoFocus"
*(attrib_field_UI2Attrib + 0x2aa8) = 0xeb
*(attrib_field_UI2Attrib + 0x2ab0) = "forceNonFancy"
*(attrib_field_UI2Attrib + 0x2b10) = 0xec
*(attrib_field_UI2Attrib + 0x2b18) = "selectionTextColor"
*(attrib_field_UI2Attrib + 0x2b78) = 0xed
*(attrib_field_UI2Attrib + 0x2b80) = "selectionOutlineColor"
*(attrib_field_UI2Attrib + 0x2be0) = 0xee
*(attrib_field_UI2Attrib + 0x2be8) = "selectionBoxColor"
*(attrib_field_UI2Attrib + 0x2c48) = 0xef
*(attrib_field_UI2Attrib + 0x2cb0) = 0xf0
*(attrib_field_UI2Attrib + 0x2cb8) = "imageOver"
*(attrib_field_UI2Attrib + 0x2d18) = 0xfd
*(attrib_field_UI2Attrib + 0x2d20) = "clickType"
*(attrib_field_UI2Attrib + 0x2d50) = &data_1180b98
*(attrib_field_UI2Attrib + 0x2d80) = 0xfe
*(attrib_field_UI2Attrib + 0x2d88) = "activatesOnDown"
*(attrib_field_UI2Attrib + 0x2de8) = 0xff
*(attrib_field_UI2Attrib + 0x2df0) = "activatesOnRClick"
*(attrib_field_UI2Attrib + 0x2e58) = "activatesOnLongPress"
*(attrib_field_UI2Attrib + 0x2eb8) = 0x101
*(attrib_field_UI2Attrib + 0x2ec0) = "activateDoesntClearFocus"
*(attrib_field_UI2Attrib + 0x2f20) = 0x102
*(attrib_field_UI2Attrib + 0x2f28) = "allowAlphaClick"
*(attrib_field_UI2Attrib + 0x2f88) = 0x103
*(attrib_field_UI2Attrib + 0x2f90) = "sound"
*(attrib_field_UI2Attrib + 0x2ff8) = "taptip"
*(attrib_field_UI2Attrib + 0x1d18) = 0x22
*(attrib_field_UI2Attrib + 0x3030) = 0x22
*(attrib_field_UI2Attrib + 0x3058) = 0x105
*(attrib_field_UI2Attrib + 0x3060) = "taptipState"
*(attrib_field_UI2Attrib + 0x30c0) = 0x106
*(attrib_field_UI2Attrib + 0x30c8) = "taptipAlignment"
*(attrib_field_UI2Attrib + 0x30f8) = &data_1180c18
*(attrib_field_UI2Attrib + 0x3128) = 0x107
*(attrib_field_UI2Attrib + 0x3130) = "taptipStyle"
*(attrib_field_UI2Attrib + 0x3160) = &data_1180c88
*(attrib_field_UI2Attrib + 0x3190) = 0x108
*(attrib_field_UI2Attrib + 0x3198) = "taptipScale"
*(attrib_field_UI2Attrib + 0x31f8) = 0x109
*(attrib_field_UI2Attrib + 0x3200) = "taptipDontPropegateStates"
*(attrib_field_UI2Attrib + 0x3260) = 0x10a
*(attrib_field_UI2Attrib + 0x3268) = "taptipDismissEatsClick"
*(attrib_field_UI2Attrib + 0x32c8) = 0xf3
*(attrib_field_UI2Attrib + 0x32d0) = "textColorDisabled"
*(attrib_field_UI2Attrib + 0x3330) = 0xf4
*(attrib_field_UI2Attrib + 0x3338) = "textColorOutlineDisabled"
*(attrib_field_UI2Attrib + 0x3398) = 0xf9
*(attrib_field_UI2Attrib + 0x33a0) = "textOffset"
*(attrib_field_UI2Attrib + 0x3400) = 0xf8
*(attrib_field_UI2Attrib + 0x3408) = "buttonInflate"
*(attrib_field_UI2Attrib + 0x3468) = 0xf5
*(attrib_field_UI2Attrib + 0x3470) = "clickSound"
*(attrib_field_UI2Attrib + 0x34d0) = 0xf6
*(attrib_field_UI2Attrib + 0x34d8) = "mouseoverSound"
*(attrib_field_UI2Attrib + 0x3538) = 0xf7
*(attrib_field_UI2Attrib + 0x3540) = "disabledSound"
*(attrib_field_UI2Attrib + 0x2fc8) = 0x15
*(attrib_field_UI2Attrib + 0x34a8) = 0x15
*(attrib_field_UI2Attrib + 0x3510) = 0x15
*(attrib_field_UI2Attrib + 0x3578) = 0x15
*(attrib_field_UI2Attrib + 0x35a0) = 0xfa
*(attrib_field_UI2Attrib + 0x35a8) = "clickEvent"
*(attrib_field_UI2Attrib + 0x3608) = 0xfc
*(attrib_field_UI2Attrib + 0x28b0) = "RectF"
*(attrib_field_UI2Attrib + 0x3410) = "RectF"
*(attrib_field_UI2Attrib + 0x3610) = "passMouseover"
*(attrib_field_UI2Attrib + 0x18d8) = "bool"
*(attrib_field_UI2Attrib + 0x2710) = "bool"
*(attrib_field_UI2Attrib + 0x2980) = "bool"
*(attrib_field_UI2Attrib + 0x29e8) = "bool"
*(attrib_field_UI2Attrib + 0x2a50) = "bool"
*(attrib_field_UI2Attrib + 0x2ab8) = "bool"
*(attrib_field_UI2Attrib + 0x2d90) = "bool"
*(attrib_field_UI2Attrib + 0x2df8) = "bool"
*(attrib_field_UI2Attrib + 0x2e60) = "bool"
*(attrib_field_UI2Attrib + 0x2ec8) = "bool"
*(attrib_field_UI2Attrib + 0x2f30) = "bool"
*(attrib_field_UI2Attrib + 0x3208) = "bool"
*(attrib_field_UI2Attrib + 0x3270) = "bool"
*(attrib_field_UI2Attrib + 0x28e8) = RECT0
*(attrib_field_UI2Attrib + 0x3448) = RECT0
*(attrib_field_UI2Attrib + 0x24a0) = "DefString"
*(attrib_field_UI2Attrib + 0x3068) = "DefString"
*(attrib_field_UI2Attrib + 0x35b0) = "DefString"
*(attrib_field_UI2Attrib + 0x3618) = "DefString"
*(attrib_field_UI2Attrib + 0x1740) = 0
*(attrib_field_UI2Attrib + 0x1748) = 0
*(attrib_field_UI2Attrib + 0x1758) = 0
*(attrib_field_UI2Attrib + 0x1750) = 0
*(attrib_field_UI2Attrib + 0x1768) = 0
*(attrib_field_UI2Attrib + 0x1760) = 0
*(attrib_field_UI2Attrib + 0x1778) = 0x40
*(attrib_field_UI2Attrib + 0x1780) = &data_793a18
*(attrib_field_UI2Attrib + 0x1788) = 0
*(attrib_field_UI2Attrib + 0x17a8) = 0
*(attrib_field_UI2Attrib + 0x17b0) = 0
*(attrib_field_UI2Attrib + 0x17c0) = 0
*(attrib_field_UI2Attrib + 0x17b8) = 0
*(attrib_field_UI2Attrib + 0x17d0) = 0
*(attrib_field_UI2Attrib + 0x17c8) = 0
*(attrib_field_UI2Attrib + 0x17e0) = 0x40
*(attrib_field_UI2Attrib + 0x17e8) = &data_793a18
*(attrib_field_UI2Attrib + 0x17f0) = 0
*(attrib_field_UI2Attrib + 0x1810) = 0
*(attrib_field_UI2Attrib + 0x1818) = 0
*(attrib_field_UI2Attrib + 0x1828) = 0
*(attrib_field_UI2Attrib + 0x1820) = 0
*(attrib_field_UI2Attrib + 0x1838) = 0
*(attrib_field_UI2Attrib + 0x1830) = 0
*(attrib_field_UI2Attrib + 0x1848) = 0x40
*(attrib_field_UI2Attrib + 0x1850) = &data_793a18
*(attrib_field_UI2Attrib + 0x1858) = 0
*(attrib_field_UI2Attrib + 0x1878) = 0
*(attrib_field_UI2Attrib + 0x1880) = 0
*(attrib_field_UI2Attrib + 0x1890) = 0
*(attrib_field_UI2Attrib + 0x1888) = 0
*(attrib_field_UI2Attrib + 0x18a0) = 0
*(attrib_field_UI2Attrib + 0x1898) = 0
*(attrib_field_UI2Attrib + 0x18b0) = 0x40
*(attrib_field_UI2Attrib + 0x18b8) = &data_793a18
*(attrib_field_UI2Attrib + 0x18c0) = 0
*(attrib_field_UI2Attrib + 0x18e0) = 0
*(attrib_field_UI2Attrib + 0x18e8) = 0
*(attrib_field_UI2Attrib + 0x18f8) = 0
*(attrib_field_UI2Attrib + 0x18f0) = 0
*(attrib_field_UI2Attrib + 0x1908) = 0
*(attrib_field_UI2Attrib + 0x1900) = 0
*(attrib_field_UI2Attrib + 0x1918) = 0
*(attrib_field_UI2Attrib + 0x1910) = 0
*(attrib_field_UI2Attrib + 0x1920) = &data_793a18
*(attrib_field_UI2Attrib + 0x1928) = 0
*(attrib_field_UI2Attrib + 0x1938) = "numTableItems"
*(attrib_field_UI2Attrib + 0x1948) = 0
*(attrib_field_UI2Attrib + 0x1950) = 0
*(attrib_field_UI2Attrib + 0x1960) = 0
*(attrib_field_UI2Attrib + 0x1958) = 0
*(attrib_field_UI2Attrib + 0x1970) = 0
*(attrib_field_UI2Attrib + 0x1968) = 0
*(attrib_field_UI2Attrib + 0x1980) = 0x40
*(attrib_field_UI2Attrib + 0x1988) = &data_793a18
*(attrib_field_UI2Attrib + 0x1990) = 0
*(attrib_field_UI2Attrib + 0x19a0) = "spacingMin"
*(attrib_field_UI2Attrib + 0x19a8) = "Vec2"
*(attrib_field_UI2Attrib + 0x19b0) = 0
*(attrib_field_UI2Attrib + 0x19b8) = 0
*(attrib_field_UI2Attrib + 0x19c8) = 0
*(attrib_field_UI2Attrib + 0x19c0) = 0
*(attrib_field_UI2Attrib + 0x19d8) = 0
*(attrib_field_UI2Attrib + 0x19d0) = 0
*(attrib_field_UI2Attrib + 0x19e0) = V20
*(attrib_field_UI2Attrib + 0x19e8) = 0
*(attrib_field_UI2Attrib + 0x19f0) = &data_793a18
*(attrib_field_UI2Attrib + 0x2e50) = 0x100
*(attrib_field_UI2Attrib + 0x2e48) = 0
*(attrib_field_UI2Attrib + 0x2e40) = &data_793a18
*(attrib_field_UI2Attrib + 0x2e30) = 0
*(attrib_field_UI2Attrib + 0x2e38) = 0
*(attrib_field_UI2Attrib + 0x2e20) = 0
*(attrib_field_UI2Attrib + 0x2e28) = 0
*(attrib_field_UI2Attrib + 0x2e10) = 0
*(attrib_field_UI2Attrib + 0x2e18) = 0
*(attrib_field_UI2Attrib + 0x2e08) = 0
*(attrib_field_UI2Attrib + 0x2e00) = 0
*(attrib_field_UI2Attrib + 0x19f8) = 0
*(attrib_field_UI2Attrib + 0x1a08) = "spacingMax"
*(attrib_field_UI2Attrib + 0x1a10) = "Vec2"
*(attrib_field_UI2Attrib + 0x1a18) = 0
*(attrib_field_UI2Attrib + 0x2de0) = 0
*(attrib_field_UI2Attrib + 0x2dd8) = &data_793a18
*(attrib_field_UI2Attrib + 0x2dc8) = 0
*(attrib_field_UI2Attrib + 0x2dd0) = 0
*(attrib_field_UI2Attrib + 0x2db8) = 0
*(attrib_field_UI2Attrib + 0x2dc0) = 0
*(attrib_field_UI2Attrib + 0x2da8) = 0
*(attrib_field_UI2Attrib + 0x2db0) = 0
*(attrib_field_UI2Attrib + 0x2da0) = 0
*(attrib_field_UI2Attrib + 0x2d98) = 0
*(attrib_field_UI2Attrib + 0x1a20) = 0
*(attrib_field_UI2Attrib + 0x1a30) = 0
*(attrib_field_UI2Attrib + 0x1a28) = 0
*(attrib_field_UI2Attrib + 0x2d78) = 0
*(attrib_field_UI2Attrib + 0x2d70) = &data_793a18
*(attrib_field_UI2Attrib + 0x2d68) = 2
*(attrib_field_UI2Attrib + 0x2d60) = 0
*(attrib_field_UI2Attrib + 0x2d58) = 0
*(attrib_field_UI2Attrib + 0x1a40) = 0
*(attrib_field_UI2Attrib + 0x2d40) = 0
*(attrib_field_UI2Attrib + 0x2d48) = 0
*(attrib_field_UI2Attrib + 0x2d38) = 0
*(attrib_field_UI2Attrib + 0x2d30) = 0
*(attrib_field_UI2Attrib + 0x2d28) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1a38) = 0
*(attrib_field_UI2Attrib + 0x1a48) = V20
*(attrib_field_UI2Attrib + 0x2d10) = 0
*(attrib_field_UI2Attrib + 0x2d08) = &data_793a18
*(attrib_field_UI2Attrib + 0x2cf8) = 0
*(attrib_field_UI2Attrib + 0x2d00) = 0
*(attrib_field_UI2Attrib + 0x2cf0) = 3
*(attrib_field_UI2Attrib + 0x2ce8) = 0
*(attrib_field_UI2Attrib + 0x2cd8) = 0
*(attrib_field_UI2Attrib + 0x2ce0) = 0
*(attrib_field_UI2Attrib + 0x2cd0) = 0
*(attrib_field_UI2Attrib + 0x2cc8) = 0
*(attrib_field_UI2Attrib + 0x2cc0) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1a50) = 0
*(attrib_field_UI2Attrib + 0x1a58) = &data_793a18
*(attrib_field_UI2Attrib + 0x2ca8) = 0
*(attrib_field_UI2Attrib + 0x2ca0) = &data_793a18
*(attrib_field_UI2Attrib + 0x2c90) = 0
*(attrib_field_UI2Attrib + 0x2c98) = 0
*(attrib_field_UI2Attrib + 0x2c80) = 0
*(attrib_field_UI2Attrib + 0x2c88) = 0
*(attrib_field_UI2Attrib + 0x2c70) = 0
*(attrib_field_UI2Attrib + 0x2c78) = 0
*(attrib_field_UI2Attrib + 0x2c68) = 0
*(attrib_field_UI2Attrib + 0x2c60) = 0
*(attrib_field_UI2Attrib + 0x2c58) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1a60) = 0
*(attrib_field_UI2Attrib + 0x1a70) = "tableItemOrder"
*(attrib_field_UI2Attrib + 0x2c50) = "maxChars"
*(attrib_field_UI2Attrib + 0x1a78) = &data_746c1b
*(attrib_field_UI2Attrib + 0x2c40) = 0
*(attrib_field_UI2Attrib + 0x2c38) = &data_793a18
*(attrib_field_UI2Attrib + 0x2c30) = 0
*(attrib_field_UI2Attrib + 0x2c28) = gRgbaIWhite
*(attrib_field_UI2Attrib + 0x2c18) = 0
*(attrib_field_UI2Attrib + 0x2c20) = 0
*(attrib_field_UI2Attrib + 0x2c08) = 0
*(attrib_field_UI2Attrib + 0x2c10) = 0
*(attrib_field_UI2Attrib + 0x2c00) = 0
*(attrib_field_UI2Attrib + 0x2bf8) = 0
*(attrib_field_UI2Attrib + 0x2bf0) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x1a80) = 0
*(attrib_field_UI2Attrib + 0x1a88) = 0
*(attrib_field_UI2Attrib + 0x2bd8) = 0
*(attrib_field_UI2Attrib + 0x2bd0) = &data_793a18
*(attrib_field_UI2Attrib + 0x2bc8) = 0
*(attrib_field_UI2Attrib + 0x2bc0) = gRgbaIWhite
*(attrib_field_UI2Attrib + 0x2bb0) = 0
*(attrib_field_UI2Attrib + 0x2bb8) = 0
*(attrib_field_UI2Attrib + 0x2ba0) = 0
*(attrib_field_UI2Attrib + 0x2ba8) = 0
*(attrib_field_UI2Attrib + 0x2b98) = 0
*(attrib_field_UI2Attrib + 0x2b90) = 0
*(attrib_field_UI2Attrib + 0x2b88) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x1a98) = 0
*(attrib_field_UI2Attrib + 0x1a90) = 0
*(attrib_field_UI2Attrib + 0x2b70) = 0
*(attrib_field_UI2Attrib + 0x2b68) = &data_793a18
*(attrib_field_UI2Attrib + 0x2b60) = 0
*(attrib_field_UI2Attrib + 0x1ad8) = "reverseDrawOrder"
*(attrib_field_UI2Attrib + 0x1d10) = 0
*(attrib_field_UI2Attrib + 0x25a8) = 0x3f800000
*(attrib_field_UI2Attrib + 0x1ff8) = 0x3f800000
*(attrib_field_UI2Attrib + 0x1f18) = 0
*(attrib_field_UI2Attrib + 0x2b58) = gRgbaIBlack
*(attrib_field_UI2Attrib + 0x2b48) = 0
*(attrib_field_UI2Attrib + 0x2b50) = 0
*(attrib_field_UI2Attrib + 0x2b38) = 0
*(attrib_field_UI2Attrib + 0x2b40) = 0
*(attrib_field_UI2Attrib + 0x2b30) = 0
*(attrib_field_UI2Attrib + 0x2b28) = 0
*(attrib_field_UI2Attrib + 0x2b20) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x1aa0) = &data_11808b8
*(attrib_field_UI2Attrib + 0x1aa8) = 0
*(attrib_field_UI2Attrib + 0x2b08) = 0
*(attrib_field_UI2Attrib + 0x2b00) = &data_793a18
*(attrib_field_UI2Attrib + 0x2af0) = 0
*(attrib_field_UI2Attrib + 0x2af8) = 0
*(attrib_field_UI2Attrib + 0x2ae0) = 0
*(attrib_field_UI2Attrib + 0x2ae8) = 0
*(attrib_field_UI2Attrib + 0x2ad0) = 0
*(attrib_field_UI2Attrib + 0x2ad8) = 0
*(attrib_field_UI2Attrib + 0x2ac8) = 0
*(attrib_field_UI2Attrib + 0x2ac0) = 0
*(attrib_field_UI2Attrib + 0x1ab0) = 0
*(attrib_field_UI2Attrib + 0x1ab8) = 2
*(attrib_field_UI2Attrib + 0x1ac0) = &data_793a18
*(attrib_field_UI2Attrib + 0x2aa0) = 0
*(attrib_field_UI2Attrib + 0x2a98) = &data_793a18
*(attrib_field_UI2Attrib + 0x2a88) = 0
*(attrib_field_UI2Attrib + 0x2a90) = 0
*(attrib_field_UI2Attrib + 0x2a78) = 0
*(attrib_field_UI2Attrib + 0x2a80) = 0
*(attrib_field_UI2Attrib + 0x2a68) = 0
*(attrib_field_UI2Attrib + 0x2a70) = 0
*(attrib_field_UI2Attrib + 0x2a60) = 0
*(attrib_field_UI2Attrib + 0x2a58) = 0
*(attrib_field_UI2Attrib + 0x1ac8) = 0
*(attrib_field_UI2Attrib + 0x1ae0) = &data_746c1b
*(attrib_field_UI2Attrib + 0x2a38) = 0
*(attrib_field_UI2Attrib + 0x2a30) = &data_793a18
*(attrib_field_UI2Attrib + 0x2a20) = 0
*(attrib_field_UI2Attrib + 0x2a28) = 0
*(attrib_field_UI2Attrib + 0x2a10) = 0
*(attrib_field_UI2Attrib + 0x2a18) = 0
*(attrib_field_UI2Attrib + 0x2a00) = 0
*(attrib_field_UI2Attrib + 0x2a08) = 0
*(attrib_field_UI2Attrib + 0x29f8) = 0
*(attrib_field_UI2Attrib + 0x29f0) = 0
*(attrib_field_UI2Attrib + 0x1ae8) = 0
*(attrib_field_UI2Attrib + 0x1af0) = 0
*(attrib_field_UI2Attrib + 0x1b00) = 0
*(attrib_field_UI2Attrib + 0x29d0) = 0
*(attrib_field_UI2Attrib + 0x29c8) = &data_793a18
*(attrib_field_UI2Attrib + 0x29b8) = 0
*(attrib_field_UI2Attrib + 0x29c0) = 0
*(attrib_field_UI2Attrib + 0x29a8) = 0
*(attrib_field_UI2Attrib + 0x29b0) = 0
*(attrib_field_UI2Attrib + 0x2998) = 0
*(attrib_field_UI2Attrib + 0x29a0) = 0
*(attrib_field_UI2Attrib + 0x2990) = 0
*(attrib_field_UI2Attrib + 0x2988) = 0
*(attrib_field_UI2Attrib + 0x1af8) = 0
*(attrib_field_UI2Attrib + 0x1b08) = &data_11808b8
*(attrib_field_UI2Attrib + 0x2970) = 0xe8
*(attrib_field_UI2Attrib + 0x1b38) = 0xd4
*(attrib_field_UI2Attrib + 0x27d0) = 0xe4
*(attrib_field_UI2Attrib + 0x2638) = "shadowOffset"
*(attrib_field_UI2Attrib + 0x2600) = &data_1180b18
*(attrib_field_UI2Attrib + 0x25d0) = "textStyle"
*(attrib_field_UI2Attrib + 0x2490) = 0xdc
*(attrib_field_UI2Attrib + 0x2460) = &data_1180ac8
*(attrib_field_UI2Attrib + 0x2430) = "forceWordWrap"
*(attrib_field_UI2Attrib + 0x1c10) = "imageRotate"
*(attrib_field_UI2Attrib + 0x1c40) = &data_1180988
*(attrib_field_UI2Attrib + 0x2260) = 0x12
*(attrib_field_UI2Attrib + 0x2228) = "font"
*(attrib_field_UI2Attrib + 0x2158) = "sublayout"
*(attrib_field_UI2Attrib + 0x1f20) = 0
*(attrib_field_UI2Attrib + 0x2968) = 0
*(attrib_field_UI2Attrib + 0x2960) = &data_793a18
*(attrib_field_UI2Attrib + 0x2958) = 2
*(attrib_field_UI2Attrib + 0x2950) = 0
*(attrib_field_UI2Attrib + 0x2948) = 0
*(attrib_field_UI2Attrib + 0x1b10) = 0
*(attrib_field_UI2Attrib + 0x2930) = 0
*(attrib_field_UI2Attrib + 0x2938) = 0
*(attrib_field_UI2Attrib + 0x2928) = 0
*(attrib_field_UI2Attrib + 0x2920) = 0
*(attrib_field_UI2Attrib + 0x2918) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1b18) = 0
*(attrib_field_UI2Attrib + 0x1b20) = 2
*(attrib_field_UI2Attrib + 0x2900) = 0
*(attrib_field_UI2Attrib + 0x28f8) = &data_793a18
*(attrib_field_UI2Attrib + 0x28f0) = 0
*(attrib_field_UI2Attrib + 0x1b28) = &data_793a18
*(attrib_field_UI2Attrib + 0x28d8) = 0
*(attrib_field_UI2Attrib + 0x28e0) = 0
*(attrib_field_UI2Attrib + 0x28c8) = 0
*(attrib_field_UI2Attrib + 0x28d0) = 0
*(attrib_field_UI2Attrib + 0x28c0) = 0
*(attrib_field_UI2Attrib + 0x28b8) = 0
*(attrib_field_UI2Attrib + 0x1b30) = 0
*(attrib_field_UI2Attrib + 0x1b48) = &data_746c1b
*(attrib_field_UI2Attrib + 0x2898) = 0
*(attrib_field_UI2Attrib + 0x2890) = &data_793a18
*(attrib_field_UI2Attrib + 0x2888) = 2
*(attrib_field_UI2Attrib + 0x2880) = 0
*(attrib_field_UI2Attrib + 0x2878) = 0
*(attrib_field_UI2Attrib + 0x1b50) = 0
*(attrib_field_UI2Attrib + 0x2860) = 0
*(attrib_field_UI2Attrib + 0x2868) = 0
*(attrib_field_UI2Attrib + 0x2858) = 0
*(attrib_field_UI2Attrib + 0x2850) = 0
*(attrib_field_UI2Attrib + 0x2848) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1b58) = 0
*(attrib_field_UI2Attrib + 0x1b68) = 0
*(attrib_field_UI2Attrib + 0x2830) = 0
*(attrib_field_UI2Attrib + 0x2828) = &data_793a18
*(attrib_field_UI2Attrib + 0x2818) = 0
*(attrib_field_UI2Attrib + 0x2820) = 0
*(attrib_field_UI2Attrib + 0x2808) = 0
*(attrib_field_UI2Attrib + 0x2810) = 0
*(attrib_field_UI2Attrib + 0x27f8) = 0
*(attrib_field_UI2Attrib + 0x2800) = 0
*(attrib_field_UI2Attrib + 0x27f0) = 0
*(attrib_field_UI2Attrib + 0x27e8) = 0
*(attrib_field_UI2Attrib + 0x27e0) = "float"
*(attrib_field_UI2Attrib + 0x1b60) = 0
*(attrib_field_UI2Attrib + 0x27c8) = 0
*(attrib_field_UI2Attrib + 0x27c0) = &data_793a18
*(attrib_field_UI2Attrib + 0x27b0) = 0
*(attrib_field_UI2Attrib + 0x27b8) = 0
*(attrib_field_UI2Attrib + 0x27a0) = 0
*(attrib_field_UI2Attrib + 0x27a8) = 0
*(attrib_field_UI2Attrib + 0x2790) = 0
*(attrib_field_UI2Attrib + 0x2798) = 0
*(attrib_field_UI2Attrib + 0x2788) = 0
*(attrib_field_UI2Attrib + 0x2780) = 0
*(attrib_field_UI2Attrib + 0x2778) = "float"
*(attrib_field_UI2Attrib + 0x1b78) = 0
*(attrib_field_UI2Attrib + 0x1b70) = 0
*(attrib_field_UI2Attrib + 0x2760) = 0
*(attrib_field_UI2Attrib + 0x2758) = &data_793a18
*(attrib_field_UI2Attrib + 0x2748) = 0
*(attrib_field_UI2Attrib + 0x2750) = 0
*(attrib_field_UI2Attrib + 0x2738) = 0
*(attrib_field_UI2Attrib + 0x2740) = 0
*(attrib_field_UI2Attrib + 0x2728) = 0
*(attrib_field_UI2Attrib + 0x2730) = 0
*(attrib_field_UI2Attrib + 0x2720) = 0
*(attrib_field_UI2Attrib + 0x2718) = 0
*(attrib_field_UI2Attrib + 0x1b88) = 0
*(attrib_field_UI2Attrib + 0x1b80) = 0
*(attrib_field_UI2Attrib + 0x1b90) = &data_793a18
*(attrib_field_UI2Attrib + 0x26f8) = 0
*(attrib_field_UI2Attrib + 0x26f0) = &data_793a18
*(attrib_field_UI2Attrib + 0x26e0) = 0
*(attrib_field_UI2Attrib + 0x26e8) = 0
*(attrib_field_UI2Attrib + 0x26d0) = 0
*(attrib_field_UI2Attrib + 0x26c0) = 0
*(attrib_field_UI2Attrib + 0x26c8) = 0
*(attrib_field_UI2Attrib + 0x26b8) = 0
*(attrib_field_UI2Attrib + 0x26b0) = 0
*(attrib_field_UI2Attrib + 0x26a8) = "float"
*(attrib_field_UI2Attrib + 0x1b98) = 0
*(attrib_field_UI2Attrib + 0x1bb0) = &data_746c1b
*(attrib_field_UI2Attrib + 0x2690) = 0
*(attrib_field_UI2Attrib + 0x2688) = &data_793a18
*(attrib_field_UI2Attrib + 0x2680) = 0
*(attrib_field_UI2Attrib + 0x2678) = &data_24b48c0
*(attrib_field_UI2Attrib + 0x2668) = 0
*(attrib_field_UI2Attrib + 0x2670) = 0
*(attrib_field_UI2Attrib + 0x2658) = 0
*(attrib_field_UI2Attrib + 0x2660) = 0
*(attrib_field_UI2Attrib + 0x2650) = 0
*(attrib_field_UI2Attrib + 0x2648) = 0
*(attrib_field_UI2Attrib + 0x2640) = "Vec2"
*(attrib_field_UI2Attrib + 0x1bb8) = 0
*(attrib_field_UI2Attrib + 0x2628) = 0
*(attrib_field_UI2Attrib + 0x2620) = &data_793a18
*(attrib_field_UI2Attrib + 0x2618) = 2
*(attrib_field_UI2Attrib + 0x2610) = 0
*(attrib_field_UI2Attrib + 0x2608) = 0
*(attrib_field_UI2Attrib + 0x25f0) = 0
*(attrib_field_UI2Attrib + 0x25f8) = 0
*(attrib_field_UI2Attrib + 0x25e8) = 0
*(attrib_field_UI2Attrib + 0x25e0) = 0
*(attrib_field_UI2Attrib + 0x25d8) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1bc0) = 0
*(attrib_field_UI2Attrib + 0x25c0) = 0
*(attrib_field_UI2Attrib + 0x25b8) = &data_793a18
*(attrib_field_UI2Attrib + 0x25b0) = 0
*(attrib_field_UI2Attrib + 0x2598) = 0
*(attrib_field_UI2Attrib + 0x25a0) = 0
*(attrib_field_UI2Attrib + 0x2588) = 0
*(attrib_field_UI2Attrib + 0x2590) = 0
*(attrib_field_UI2Attrib + 0x2580) = 0
*(attrib_field_UI2Attrib + 0x2578) = 0
*(attrib_field_UI2Attrib + 0x2570) = "float"
*(attrib_field_UI2Attrib + 0x1bd0) = 0
*(attrib_field_UI2Attrib + 0x1bc8) = 0
*(attrib_field_UI2Attrib + 0x2558) = 0
*(attrib_field_UI2Attrib + 0x2550) = &data_793a18
*(attrib_field_UI2Attrib + 0x2540) = 0
*(attrib_field_UI2Attrib + 0x2548) = 0
*(attrib_field_UI2Attrib + 0x2530) = 0
*(attrib_field_UI2Attrib + 0x2538) = 0
*(attrib_field_UI2Attrib + 0x2520) = 0
*(attrib_field_UI2Attrib + 0x2528) = 0
*(attrib_field_UI2Attrib + 0x2518) = 0
*(attrib_field_UI2Attrib + 0x2510) = 0
*(attrib_field_UI2Attrib + 0x1be0) = 0
*(attrib_field_UI2Attrib + 0x1be8) = 0
*(attrib_field_UI2Attrib + 0x1bf0) = 2
*(attrib_field_UI2Attrib + 0x24f0) = 0
*(attrib_field_UI2Attrib + 0x24e8) = &data_793a18
*(attrib_field_UI2Attrib + 0x24e0) = 0
*(attrib_field_UI2Attrib + 0x24d8) = &data_793a18
*(attrib_field_UI2Attrib + 0x24c8) = 0
*(attrib_field_UI2Attrib + 0x24d0) = 0
*(attrib_field_UI2Attrib + 0x24b8) = 0
*(attrib_field_UI2Attrib + 0x24c0) = 0
*(attrib_field_UI2Attrib + 0x24b0) = 0
*(attrib_field_UI2Attrib + 0x24a8) = 0
*(attrib_field_UI2Attrib + 0x1bf8) = &data_793a18
*(attrib_field_UI2Attrib + 0x1c00) = 0
*(attrib_field_UI2Attrib + 0x2488) = 0
*(attrib_field_UI2Attrib + 0x2480) = &data_793a18
*(attrib_field_UI2Attrib + 0x2478) = 2
*(attrib_field_UI2Attrib + 0x2470) = 0
*(attrib_field_UI2Attrib + 0x2468) = 0
*(attrib_field_UI2Attrib + 0x2450) = 0
*(attrib_field_UI2Attrib + 0x2458) = 0
*(attrib_field_UI2Attrib + 0x2448) = 0
*(attrib_field_UI2Attrib + 0x2440) = 0
*(attrib_field_UI2Attrib + 0x2438) = &data_746c1b
*(attrib_field_UI2Attrib + 0x2420) = 0
*(attrib_field_UI2Attrib + 0x2418) = &data_793a18
*(attrib_field_UI2Attrib + 0x2410) = 0
*(attrib_field_UI2Attrib + 0x2408) = gRgbaIBlack
*(attrib_field_UI2Attrib + 0x23f8) = 0
*(attrib_field_UI2Attrib + 0x2400) = 0
*(attrib_field_UI2Attrib + 0x23e8) = 0
*(attrib_field_UI2Attrib + 0x23f0) = 0
*(attrib_field_UI2Attrib + 0x23e0) = 0
*(attrib_field_UI2Attrib + 0x23d8) = 0
*(attrib_field_UI2Attrib + 0x23d0) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x1c18) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1c20) = 0
*(attrib_field_UI2Attrib + 0x23b8) = 0
*(attrib_field_UI2Attrib + 0x23b0) = &data_793a18
*(attrib_field_UI2Attrib + 0x23a8) = 0
*(attrib_field_UI2Attrib + 0x23a0) = gRgbaIWhite
*(attrib_field_UI2Attrib + 0x2390) = 0
*(attrib_field_UI2Attrib + 0x2398) = 0
*(attrib_field_UI2Attrib + 0x2380) = 0
*(attrib_field_UI2Attrib + 0x2388) = 0
*(attrib_field_UI2Attrib + 0x2378) = 0
*(attrib_field_UI2Attrib + 0x2370) = 0
*(attrib_field_UI2Attrib + 0x2368) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x1c28) = 0
*(attrib_field_UI2Attrib + 0x1c38) = 0
*(attrib_field_UI2Attrib + 0x2350) = 0
*(attrib_field_UI2Attrib + 0x2348) = &data_793a18
*(attrib_field_UI2Attrib + 0x2340) = 0
*(attrib_field_UI2Attrib + 0x1c30) = 0
*(attrib_field_UI2Attrib + 0x2328) = 0
*(attrib_field_UI2Attrib + 0x2330) = 0
*(attrib_field_UI2Attrib + 0x2318) = 0
*(attrib_field_UI2Attrib + 0x2320) = 0
*(attrib_field_UI2Attrib + 0x2310) = 0
*(attrib_field_UI2Attrib + 0x2308) = 0
*(attrib_field_UI2Attrib + 0x2300) = "float"
*(attrib_field_UI2Attrib + 0x1c48) = 0
*(attrib_field_UI2Attrib + 0x22e8) = 0
*(attrib_field_UI2Attrib + 0x22e0) = &data_793a18
*(attrib_field_UI2Attrib + 0x22d0) = 0
*(attrib_field_UI2Attrib + 0x22d8) = 0
*(attrib_field_UI2Attrib + 0x1c50) = 0
*(attrib_field_UI2Attrib + 0x22c0) = 0
*(attrib_field_UI2Attrib + 0x22b0) = 0
*(attrib_field_UI2Attrib + 0x22b8) = 0
*(attrib_field_UI2Attrib + 0x22a8) = 0
*(attrib_field_UI2Attrib + 0x22a0) = 0
*(attrib_field_UI2Attrib + 0x2298) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1c58) = 2
*(attrib_field_UI2Attrib + 0x1c60) = &data_793a18
*(attrib_field_UI2Attrib + 0x2280) = 0
*(attrib_field_UI2Attrib + 0x2278) = &data_793a18
*(attrib_field_UI2Attrib + 0x2268) = 0
*(attrib_field_UI2Attrib + 0x2270) = 0
*(attrib_field_UI2Attrib + 0x2258) = 0
*(attrib_field_UI2Attrib + 0x2248) = 0
*(attrib_field_UI2Attrib + 0x2250) = 0
*(attrib_field_UI2Attrib + 0x2240) = 0
*(attrib_field_UI2Attrib + 0x2238) = 0
*(attrib_field_UI2Attrib + 0x2230) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1c68) = 0
*(attrib_field_UI2Attrib + 0x2218) = 0
*(attrib_field_UI2Attrib + 0x2210) = &data_793a18
*(attrib_field_UI2Attrib + 0x2208) = 0x40
*(attrib_field_UI2Attrib + 0x1c80) = "float"
*(attrib_field_UI2Attrib + 0x21f0) = 0
*(attrib_field_UI2Attrib + 0x21f8) = 0
*(attrib_field_UI2Attrib + 0x21e0) = 0
*(attrib_field_UI2Attrib + 0x21e8) = 0
*(attrib_field_UI2Attrib + 0x21d8) = 0
*(attrib_field_UI2Attrib + 0x21d0) = 0
*(attrib_field_UI2Attrib + 0x1c88) = 0
*(attrib_field_UI2Attrib + 0x1c90) = 0
*(attrib_field_UI2Attrib + 0x1ca0) = 0
*(attrib_field_UI2Attrib + 0x21b0) = 0
*(attrib_field_UI2Attrib + 0x21a8) = &data_793a18
*(attrib_field_UI2Attrib + 0x2198) = 0
*(attrib_field_UI2Attrib + 0x21a0) = 0
*(attrib_field_UI2Attrib + 0x2188) = 0
*(attrib_field_UI2Attrib + 0x2190) = 0
*(attrib_field_UI2Attrib + 0x2178) = 0
*(attrib_field_UI2Attrib + 0x2180) = 0
*(attrib_field_UI2Attrib + 0x2170) = 0
*(attrib_field_UI2Attrib + 0x2168) = 0
*(attrib_field_UI2Attrib + 0x2160) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x1c98) = 0
*(attrib_field_UI2Attrib + 0x2148) = 0
*(attrib_field_UI2Attrib + 0x2140) = &data_793a18
*(attrib_field_UI2Attrib + 0x2130) = 0
*(attrib_field_UI2Attrib + 0x2138) = 0
*(attrib_field_UI2Attrib + 0x2120) = 0
*(attrib_field_UI2Attrib + 0x2128) = 0
*(attrib_field_UI2Attrib + 0x2110) = 0
*(attrib_field_UI2Attrib + 0x2118) = 0
*(attrib_field_UI2Attrib + 0x2108) = 0
*(attrib_field_UI2Attrib + 0x2100) = 0
*(attrib_field_UI2Attrib + 0x20f8) = "float"
*(attrib_field_UI2Attrib + 0x1cb0) = 0
*(attrib_field_UI2Attrib + 0x1ca8) = 0
*(attrib_field_UI2Attrib + 0x20e0) = 0
*(attrib_field_UI2Attrib + 0x20d8) = &data_793a18
*(attrib_field_UI2Attrib + 0x20d0) = 2
*(attrib_field_UI2Attrib + 0x20c8) = 0
*(attrib_field_UI2Attrib + 0x20c0) = 0
*(attrib_field_UI2Attrib + 0x1cc0) = 0
*(attrib_field_UI2Attrib + 0x20a8) = 0
*(attrib_field_UI2Attrib + 0x20b0) = 0
*(attrib_field_UI2Attrib + 0x20a0) = 0
*(attrib_field_UI2Attrib + 0x2098) = 0
*(attrib_field_UI2Attrib + 0x2090) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1cb8) = 0
*(attrib_field_UI2Attrib + 0x1cc8) = &data_793a18
*(attrib_field_UI2Attrib + 0x2078) = 0
*(attrib_field_UI2Attrib + 0x2070) = &data_793a18
*(attrib_field_UI2Attrib + 0x2060) = 0
*(attrib_field_UI2Attrib + 0x2068) = 0
*(attrib_field_UI2Attrib + 0x2050) = 0
*(attrib_field_UI2Attrib + 0x2058) = 0
*(attrib_field_UI2Attrib + 0x2040) = 0
*(attrib_field_UI2Attrib + 0x2048) = 0
*(attrib_field_UI2Attrib + 0x2038) = 0
*(attrib_field_UI2Attrib + 0x2030) = 0
*(attrib_field_UI2Attrib + 0x2028) = "float"
*(attrib_field_UI2Attrib + 0x1cd0) = 0
*(attrib_field_UI2Attrib + 0x1ce8) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x2010) = 0
*(attrib_field_UI2Attrib + 0x2008) = &data_793a18
*(attrib_field_UI2Attrib + 0x2000) = 0
*(attrib_field_UI2Attrib + 0x1fe8) = 0
*(attrib_field_UI2Attrib + 0x1ff0) = 0
*(attrib_field_UI2Attrib + 0x1fd8) = 0
*(attrib_field_UI2Attrib + 0x1fe0) = 0
*(attrib_field_UI2Attrib + 0x1fd0) = 0
*(attrib_field_UI2Attrib + 0x1fc8) = 0
*(attrib_field_UI2Attrib + 0x1fc0) = "float"
*(attrib_field_UI2Attrib + 0x1cf0) = 0
*(attrib_field_UI2Attrib + 0x1cf8) = 0
*(attrib_field_UI2Attrib + 0x1fa8) = 0
*(attrib_field_UI2Attrib + 0x1fa0) = &data_793a18
*(attrib_field_UI2Attrib + 0x1f90) = 0
*(attrib_field_UI2Attrib + 0x1f98) = 0
*(attrib_field_UI2Attrib + 0x1f80) = 0
*(attrib_field_UI2Attrib + 0x1f88) = 0
*(attrib_field_UI2Attrib + 0x1f70) = 0
*(attrib_field_UI2Attrib + 0x1f78) = 0
*(attrib_field_UI2Attrib + 0x1f68) = 0
*(attrib_field_UI2Attrib + 0x1f60) = 0
*(attrib_field_UI2Attrib + 0x1f58) = "float"
*(attrib_field_UI2Attrib + 0x1d08) = 0
*(attrib_field_UI2Attrib + 0x1d00) = 0
*(attrib_field_UI2Attrib + 0x1f40) = 0
*(attrib_field_UI2Attrib + 0x1f38) = &data_793a18
*(attrib_field_UI2Attrib + 0x1f30) = 0
*(attrib_field_UI2Attrib + 0x1f08) = 0
*(attrib_field_UI2Attrib + 0x1f10) = 0
*(attrib_field_UI2Attrib + 0x1f00) = 0
*(attrib_field_UI2Attrib + 0x1ef8) = 0
*(attrib_field_UI2Attrib + 0x1ef0) = "float"
*(attrib_field_UI2Attrib + 0x1d28) = 0
*(attrib_field_UI2Attrib + 0x1d20) = 0
*(attrib_field_UI2Attrib + 0x1ed8) = 0
*(attrib_field_UI2Attrib + 0x1ed0) = &data_793a18
*(attrib_field_UI2Attrib + 0x1ec8) = 2
*(attrib_field_UI2Attrib + 0x1ec0) = 0
*(attrib_field_UI2Attrib + 0x1eb8) = 0
*(attrib_field_UI2Attrib + 0x1d30) = &data_793a18
*(attrib_field_UI2Attrib + 0x1ea0) = 0
*(attrib_field_UI2Attrib + 0x1ea8) = 0
*(attrib_field_UI2Attrib + 0x1e98) = 0
*(attrib_field_UI2Attrib + 0x1e90) = 0
*(attrib_field_UI2Attrib + 0x1e88) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1d38) = 0
*(attrib_field_UI2Attrib + 0x1d50) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1e70) = 0
*(attrib_field_UI2Attrib + 0x1e68) = &data_793a18
*(attrib_field_UI2Attrib + 0x1e60) = 0
*(attrib_field_UI2Attrib + 0x1e58) = 0x3f800000
*(attrib_field_UI2Attrib + 0x1e48) = 0
*(attrib_field_UI2Attrib + 0x1e50) = 0
*(attrib_field_UI2Attrib + 0x1e38) = 0
*(attrib_field_UI2Attrib + 0x1e40) = 0
*(attrib_field_UI2Attrib + 0x1e30) = 0
*(attrib_field_UI2Attrib + 0x1e28) = 0
*(attrib_field_UI2Attrib + 0x1e20) = "float"
*(attrib_field_UI2Attrib + 0x1d58) = 0
*(attrib_field_UI2Attrib + 0x1d60) = 0
*(attrib_field_UI2Attrib + 0x1e08) = 0
*(attrib_field_UI2Attrib + 0x1e00) = &data_793a18
*(attrib_field_UI2Attrib + 0x1df8) = 0
*(attrib_field_UI2Attrib + 0x1d70) = 0
*(attrib_field_UI2Attrib + 0x1de0) = 0
*(attrib_field_UI2Attrib + 0x1de8) = 0
*(attrib_field_UI2Attrib + 0x1dd0) = 0
*(attrib_field_UI2Attrib + 0x1dd8) = 0
*(attrib_field_UI2Attrib + 0x1dc8) = 0
*(attrib_field_UI2Attrib + 0x1dc0) = 0
*(attrib_field_UI2Attrib + 0x1db8) = &data_746c1b
*(attrib_field_UI2Attrib + 0x1d68) = 0
*(attrib_field_UI2Attrib + 0x1d80) = 0
*(attrib_field_UI2Attrib + 0x1da0) = 0
*(attrib_field_UI2Attrib + 0x1d98) = &data_793a18
*(attrib_field_UI2Attrib + 0x1d90) = 0
*(attrib_field_UI2Attrib + 0x1d78) = 0
*(attrib_field_UI2Attrib + 0x2e68) = 0
*(attrib_field_UI2Attrib + 0x2e70) = 0
*(attrib_field_UI2Attrib + 0x2e80) = 0
*(attrib_field_UI2Attrib + 0x2e78) = 0
*(attrib_field_UI2Attrib + 0x2e90) = 0
*(attrib_field_UI2Attrib + 0x2e88) = 0
*(attrib_field_UI2Attrib + 0x2ea0) = 0
*(attrib_field_UI2Attrib + 0x2e98) = 0
*(attrib_field_UI2Attrib + 0x2ea8) = &data_793a18
*(attrib_field_UI2Attrib + 0x2eb0) = 0
*(attrib_field_UI2Attrib + 0x2ed0) = 0
*(attrib_field_UI2Attrib + 0x2ed8) = 0
*(attrib_field_UI2Attrib + 0x2ee8) = 0
*(attrib_field_UI2Attrib + 0x2ee0) = 0
*(attrib_field_UI2Attrib + 0x2ef8) = 0
*(attrib_field_UI2Attrib + 0x2ef0) = 0
*(attrib_field_UI2Attrib + 0x2f08) = 0
*(attrib_field_UI2Attrib + 0x2f00) = 0
*(attrib_field_UI2Attrib + 0x2f10) = &data_793a18
*(attrib_field_UI2Attrib + 0x2f18) = 0
*(attrib_field_UI2Attrib + 0x2f38) = 0
*(attrib_field_UI2Attrib + 0x2f40) = 0
*(attrib_field_UI2Attrib + 0x2f50) = 0
*(attrib_field_UI2Attrib + 0x2f48) = 0
*(attrib_field_UI2Attrib + 0x2f60) = 0
*(attrib_field_UI2Attrib + 0x2f58) = 0
*(attrib_field_UI2Attrib + 0x2f70) = 0
*(attrib_field_UI2Attrib + 0x2f68) = 0
*(attrib_field_UI2Attrib + 0x2f78) = &data_793a18
*(attrib_field_UI2Attrib + 0x2f80) = 0
*(attrib_field_UI2Attrib + 0x2f98) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x2fa0) = 0
*(attrib_field_UI2Attrib + 0x2fa8) = 0
*(attrib_field_UI2Attrib + 0x2fb8) = 0
*(attrib_field_UI2Attrib + 0x2fb0) = 0
*(attrib_field_UI2Attrib + 0x2fc0) = 0
*(attrib_field_UI2Attrib + 0x2fd8) = 0
*(attrib_field_UI2Attrib + 0x2fd0) = 0
*(attrib_field_UI2Attrib + 0x2fe0) = &data_793a18
*(attrib_field_UI2Attrib + 0x2fe8) = 0
*(attrib_field_UI2Attrib + 0x2ff0) = 0x104
*(attrib_field_UI2Attrib + 0x3000) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x3008) = 0
*(attrib_field_UI2Attrib + 0x3010) = 0
*(attrib_field_UI2Attrib + 0x3020) = 0
*(attrib_field_UI2Attrib + 0x3018) = 0
*(attrib_field_UI2Attrib + 0x3028) = 0
*(attrib_field_UI2Attrib + 0x3040) = 0
*(attrib_field_UI2Attrib + 0x3038) = 0
*(attrib_field_UI2Attrib + 0x3048) = &data_793a18
*(attrib_field_UI2Attrib + 0x3050) = 0
*(attrib_field_UI2Attrib + 0x3070) = 0
*(attrib_field_UI2Attrib + 0x3078) = 0
*(attrib_field_UI2Attrib + 0x3088) = 0
*(attrib_field_UI2Attrib + 0x3080) = 0
*(attrib_field_UI2Attrib + 0x3098) = 0
*(attrib_field_UI2Attrib + 0x3090) = 0
*(attrib_field_UI2Attrib + 0x30a0) = &data_793a18
*(attrib_field_UI2Attrib + 0x30a8) = 0
*(attrib_field_UI2Attrib + 0x30b0) = &data_793a18
*(attrib_field_UI2Attrib + 0x30b8) = 0
*(attrib_field_UI2Attrib + 0x30d0) = &data_746c1b
*(attrib_field_UI2Attrib + 0x30d8) = 0
*(attrib_field_UI2Attrib + 0x30e0) = 0
*(attrib_field_UI2Attrib + 0x30f0) = 0
*(attrib_field_UI2Attrib + 0x30e8) = 0
*(attrib_field_UI2Attrib + 0x3100) = 0
*(attrib_field_UI2Attrib + 0x3108) = 0
*(attrib_field_UI2Attrib + 0x3110) = 2
*(attrib_field_UI2Attrib + 0x3118) = &data_793a18
*(attrib_field_UI2Attrib + 0x3120) = 0
*(attrib_field_UI2Attrib + 0x3138) = &data_746c1b
*(attrib_field_UI2Attrib + 0x3140) = 0
*(attrib_field_UI2Attrib + 0x3148) = 0
*(attrib_field_UI2Attrib + 0x3158) = 0
*(attrib_field_UI2Attrib + 0x3150) = 0
*(attrib_field_UI2Attrib + 0x3168) = 0
*(attrib_field_UI2Attrib + 0x3170) = 0
*(attrib_field_UI2Attrib + 0x3178) = 2
*(attrib_field_UI2Attrib + 0x3180) = &data_793a18
*(attrib_field_UI2Attrib + 0x3188) = 0
*(attrib_field_UI2Attrib + 0x31a0) = "float"
*(attrib_field_UI2Attrib + 0x31a8) = 0
*(attrib_field_UI2Attrib + 0x31b0) = 0
*(attrib_field_UI2Attrib + 0x31c0) = 0
*(attrib_field_UI2Attrib + 0x31b8) = 0
*(attrib_field_UI2Attrib + 0x31d0) = 0
*(attrib_field_UI2Attrib + 0x31c8) = 0
*(attrib_field_UI2Attrib + 0x31d8) = 0x3f800000
*(attrib_field_UI2Attrib + 0x31e0) = 0
*(attrib_field_UI2Attrib + 0x31e8) = &data_793a18
*(attrib_field_UI2Attrib + 0x31f0) = 0
*(attrib_field_UI2Attrib + 0x3210) = 0
*(attrib_field_UI2Attrib + 0x3218) = 0
*(attrib_field_UI2Attrib + 0x3228) = 0
*(attrib_field_UI2Attrib + 0x3220) = 0
*(attrib_field_UI2Attrib + 0x3238) = 0
*(attrib_field_UI2Attrib + 0x3230) = 0
*(attrib_field_UI2Attrib + 0x3248) = 0
*(attrib_field_UI2Attrib + 0x3240) = 0
*(attrib_field_UI2Attrib + 0x3250) = &data_793a18
*(attrib_field_UI2Attrib + 0x3258) = 0
*(attrib_field_UI2Attrib + 0x3278) = 0
*(attrib_field_UI2Attrib + 0x3280) = 0
*(attrib_field_UI2Attrib + 0x3290) = 0
*(attrib_field_UI2Attrib + 0x3288) = 0
*(attrib_field_UI2Attrib + 0x32a0) = 0
*(attrib_field_UI2Attrib + 0x3298) = 0
*(attrib_field_UI2Attrib + 0x32b0) = 0
*(attrib_field_UI2Attrib + 0x32a8) = 0
*(attrib_field_UI2Attrib + 0x32b8) = &data_793a18
*(attrib_field_UI2Attrib + 0x32c0) = 0
*(attrib_field_UI2Attrib + 0x32d8) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x32e0) = 0
*(attrib_field_UI2Attrib + 0x32e8) = 0
*(attrib_field_UI2Attrib + 0x32f8) = 0
*(attrib_field_UI2Attrib + 0x32f0) = 0
*(attrib_field_UI2Attrib + 0x3308) = 0
*(attrib_field_UI2Attrib + 0x3300) = 0
*(attrib_field_UI2Attrib + 0x3310) = gRgbaIWhite
*(attrib_field_UI2Attrib + 0x3318) = 0
*(attrib_field_UI2Attrib + 0x3320) = &data_793a18
*(attrib_field_UI2Attrib + 0x3328) = 0
*(attrib_field_UI2Attrib + 0x3340) = "ColorRgbaI"
*(attrib_field_UI2Attrib + 0x3348) = 0
*(attrib_field_UI2Attrib + 0x3350) = 0
*(attrib_field_UI2Attrib + 0x3360) = 0
*(attrib_field_UI2Attrib + 0x3358) = 0
*(attrib_field_UI2Attrib + 0x3370) = 0
*(attrib_field_UI2Attrib + 0x3368) = 0
*(attrib_field_UI2Attrib + 0x3378) = gRgbaIBlack
*(attrib_field_UI2Attrib + 0x3380) = 0
*(attrib_field_UI2Attrib + 0x3388) = &data_793a18
*(attrib_field_UI2Attrib + 0x3390) = 0
*(attrib_field_UI2Attrib + 0x33a8) = "Vec2"
*(attrib_field_UI2Attrib + 0x33b0) = 0
*(attrib_field_UI2Attrib + 0x33b8) = 0
*(attrib_field_UI2Attrib + 0x33c8) = 0
*(attrib_field_UI2Attrib + 0x33c0) = 0
*(attrib_field_UI2Attrib + 0x33d8) = 0
*(attrib_field_UI2Attrib + 0x33d0) = 0
*(attrib_field_UI2Attrib + 0x33e0) = V20
*(attrib_field_UI2Attrib + 0x33e8) = 0
*(attrib_field_UI2Attrib + 0x33f0) = &data_793a18
*(attrib_field_UI2Attrib + 0x33f8) = 0
*(attrib_field_UI2Attrib + 0x3418) = 0
*(attrib_field_UI2Attrib + 0x3420) = 0
*(attrib_field_UI2Attrib + 0x3430) = 0
*(attrib_field_UI2Attrib + 0x3428) = 0
*(attrib_field_UI2Attrib + 0x3440) = 0
*(attrib_field_UI2Attrib + 0x3438) = 0
*(attrib_field_UI2Attrib + 0x3450) = 0
*(attrib_field_UI2Attrib + 0x3458) = &data_793a18
*(attrib_field_UI2Attrib + 0x3460) = 0
*(attrib_field_UI2Attrib + 0x3478) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x3480) = 0
*(attrib_field_UI2Attrib + 0x3488) = 0
*(attrib_field_UI2Attrib + 0x3498) = 0
*(attrib_field_UI2Attrib + 0x3490) = 0
*(attrib_field_UI2Attrib + 0x34a0) = 0
*(attrib_field_UI2Attrib + 0x34b8) = 0
*(attrib_field_UI2Attrib + 0x34b0) = 0
*(attrib_field_UI2Attrib + 0x34c0) = &data_793a18
*(attrib_field_UI2Attrib + 0x34c8) = 0
*(attrib_field_UI2Attrib + 0x34e0) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x34e8) = 0
*(attrib_field_UI2Attrib + 0x34f0) = 0
*(attrib_field_UI2Attrib + 0x3500) = 0
*(attrib_field_UI2Attrib + 0x34f8) = 0
*(attrib_field_UI2Attrib + 0x3508) = 0
*(attrib_field_UI2Attrib + 0x3520) = 0
*(attrib_field_UI2Attrib + 0x3518) = 0
*(attrib_field_UI2Attrib + 0x3528) = &data_793a18
*(attrib_field_UI2Attrib + 0x3530) = 0
*(attrib_field_UI2Attrib + 0x3548) = "DefAssetPtr"
*(attrib_field_UI2Attrib + 0x3550) = 0
*(attrib_field_UI2Attrib + 0x3558) = 0
*(attrib_field_UI2Attrib + 0x3568) = 0
*(attrib_field_UI2Attrib + 0x3560) = 0
*(attrib_field_UI2Attrib + 0x3570) = 0
*(attrib_field_UI2Attrib + 0x3588) = 0
*(attrib_field_UI2Attrib + 0x3580) = 0
*(attrib_field_UI2Attrib + 0x3590) = &data_793a18
*(attrib_field_UI2Attrib + 0x3598) = 0
*(attrib_field_UI2Attrib + 0x35b8) = 0
*(attrib_field_UI2Attrib + 0x35c0) = 0
*(attrib_field_UI2Attrib + 0x35d0) = 0
*(attrib_field_UI2Attrib + 0x35c8) = 0
*(attrib_field_UI2Attrib + 0x35e0) = 0
*(attrib_field_UI2Attrib + 0x35d8) = 0
*(attrib_field_UI2Attrib + 0x35e8) = &data_793a18
*(attrib_field_UI2Attrib + 0x35f0) = 0
*(attrib_field_UI2Attrib + 0x35f8) = &data_793a18
*(attrib_field_UI2Attrib + 0x3600) = 0
*(attrib_field_UI2Attrib + 0x3620) = 0
*(attrib_field_UI2Attrib + 0x3628) = 0
*(attrib_field_UI2Attrib + 0x3638) = 0
*(attrib_field_UI2Attrib + 0x3630) = 0
*(attrib_field_UI2Attrib + 0x3648) = 0
*(attrib_field_UI2Attrib + 0x3640) = 0
*(attrib_field_UI2Attrib + 0x3650) = &data_793a18
*(attrib_field_UI2Attrib + 0x3658) = 0
*(attrib_field_UI2Attrib + 0x3660) = &data_793a18
*(attrib_field_UI2Attrib + 0x3668) = 0
*attrib_ptr_UI2Attrib = RegisterAttribTableBeforeMain(attrib_map_UI2Attrib)
*macro_ptr_UI2StateOverride = RegisterDefMapBeforeMain(macro_map_UI2StateOverride)
uint64_t x0_28 = RegisterDefMapBeforeMain(macro_map_UI2StateOverrides)
data_24b48c8 = 0x45000000454a6000
data_24b48d0 = 0x44e3a000452ab000
*macro_ptr_UI2StateOverrides = x0_28
*macro_ptr_UI2Def = RegisterDefMapBeforeMain(macro_map_UI2Def)
*(macro_field_UI2TransitionField + 8) = "field"
*(macro_field_UI2TransitionField + 0x10) = &data_746c1b
*(macro_field_UI2TransitionField + 0x38) = &data_11805c8
*(macro_field_UI2TransitionField + 0x70) = "duration"
*(macro_field_UI2TransitionField + 0x78) = "float"
*(macro_field_UI2TransitionField + 0xd0) = 8
*(macro_field_UI2TransitionField + 0xd8) = "delay"
*(macro_field_UI2TransitionField + 0xe0) = "float"
*macro_field_UI2TransitionField = 0
*(macro_field_UI2TransitionField + 0x18) = 0
*(macro_field_UI2TransitionField + 0x20) = 0
*(macro_field_UI2TransitionField + 0x28) = 0
*(macro_field_UI2TransitionField + 0x30) = 0
*(macro_field_UI2TransitionField + 0x40) = 0
*(macro_field_UI2TransitionField + 0x48) = 0
*(macro_field_UI2TransitionField + 0x50) = 2
*(macro_field_UI2TransitionField + 0x58) = &data_793a18
*(macro_field_UI2TransitionField + 0x60) = 4
*(macro_field_UI2TransitionField + 0x68) = 4
*(macro_field_UI2TransitionField + 0x80) = 0
*(macro_field_UI2TransitionField + 0x88) = 0
*(macro_field_UI2TransitionField + 0x90) = 0
*(macro_field_UI2TransitionField + 0x98) = 0
*(macro_field_UI2TransitionField + 0xa8) = 0
*(macro_field_UI2TransitionField + 0xa0) = 0
*(macro_field_UI2TransitionField + 0xb0) = 0
*(macro_field_UI2TransitionField + 0xb8) = 0
*(macro_field_UI2TransitionField + 0xc0) = &data_793a18
*(macro_field_UI2TransitionField + 0xc8) = 4
*(macro_field_UI2TransitionField + 0xe8) = 0
*(macro_field_UI2TransitionField + 0xf0) = 0
*(macro_field_UI2TransitionField + 0x100) = 0
*(macro_field_UI2TransitionField + 0x108) = 0
*(macro_field_UI2TransitionField + 0x110) = 0
*(macro_field_UI2TransitionField + 0xf8) = 0
*(macro_field_UI2TransitionField + 0x118) = 0
*(macro_field_UI2TransitionField + 0x120) = 0
*(macro_field_UI2TransitionField + 0x128) = &data_793a18
*(macro_field_UI2TransitionField + 0x130) = 4
*(macro_field_UI2TransitionField + 0x138) = 0xc
*(macro_field_UI2TransitionField + 0x140) = "curve"
*(macro_field_UI2TransitionField + 0x148) = &data_746c1b
*(macro_field_UI2TransitionField + 0x150) = 0
*(macro_field_UI2TransitionField + 0x158) = 0
*(macro_field_UI2TransitionField + 0x160) = 0
*(macro_field_UI2TransitionField + 0x168) = 0
*(macro_field_UI2TransitionField + 0x178) = 0
*(macro_field_UI2TransitionField + 0x180) = 4
*(macro_field_UI2TransitionField + 0x188) = 2
*(macro_field_UI2TransitionField + 0x170) = gAnimCurve
*(macro_field_UI2TransitionField + 0x190) = &data_793a18
*(macro_field_UI2TransitionField + 0x198) = 4
*macro_ptr_UI2TransitionField = RegisterDefMapBeforeMain(macro_map_UI2TransitionField)
*macro_ptr_UI2Transition = RegisterDefMapBeforeMain(macro_map_UI2Transition)
*macro_ptr_UI2LocalizationSuffix = RegisterDefMapBeforeMain(macro_map_UI2LocalizationSuffix)
*macro_ptr_UI2LocalizationSuffixes = RegisterDefMapBeforeMain(macro_map_UI2LocalizationSuffixes)
*(macro_field_PageAlignAnim + 0x70) = "target"
*(macro_field_PageAlignAnim + 0x78) = "UIRectAlignment"
*(macro_field_PageAlignAnim + 0x68) = 0x20
*(macro_field_PageAlignAnim + 8) = "prev"
*(macro_field_PageAlignAnim + 0x10) = "UIRectAlignment"
*macro_field_PageAlignAnim = 0
*(macro_field_PageAlignAnim + 0x18) = 0
*(macro_field_PageAlignAnim + 0x20) = 0
*(macro_field_PageAlignAnim + 0x30) = 0
*(macro_field_PageAlignAnim + 0x38) = 0
*(macro_field_PageAlignAnim + 0x28) = 0
*(macro_field_PageAlignAnim + 0x40) = 0
*(macro_field_PageAlignAnim + 0x48) = 0
*(macro_field_PageAlignAnim + 0x50) = 0
*(macro_field_PageAlignAnim + 0x58) = &data_793a18
*(macro_field_PageAlignAnim + 0x80) = 0
*(macro_field_PageAlignAnim + 0x88) = 0
*(macro_field_PageAlignAnim + 0x90) = 0
*(macro_field_PageAlignAnim + 0x98) = 0
*(macro_field_PageAlignAnim + 0xa8) = 0
*(macro_field_PageAlignAnim + 0xa0) = 0
*(macro_field_PageAlignAnim + 0xb0) = 0
*(macro_field_PageAlignAnim + 0xb8) = 0
*(macro_field_PageAlignAnim + 0xc0) = &data_793a18
*(macro_field_PageAlignAnim + 0xd0) = 0x40
*(macro_field_PageAlignAnim + 0xd8) = &data_72d864
*(macro_field_PageAlignAnim + 0xe0) = "float"
*(macro_field_PageAlignAnim + 0xe8) = 0
*(macro_field_PageAlignAnim + 0xf0) = 0
*(macro_field_PageAlignAnim + 0x100) = 0
*(macro_field_PageAlignAnim + 0x108) = 0
*(macro_field_PageAlignAnim + 0x110) = 0
*(macro_field_PageAlignAnim + 0xf8) = 0
*(macro_field_PageAlignAnim + 0x118) = 0x3f800000
*(macro_field_PageAlignAnim + 0x120) = 0
*(macro_field_PageAlignAnim + 0x128) = &data_793a18
*(macro_field_PageAlignAnim + 0x60) = 0x20
*(macro_field_PageAlignAnim + 0xc8) = 0x20
*(macro_field_PageAlignAnim + 0x130) = 4
uint64_t x0_40 = RegisterDefMapBeforeMain(macro_map_PageAlignAnim)
data_24b48d8 = 0x3f0000003f000000
*macro_ptr_PageAlignAnim = x0_40
*macro_ptr_UI2EvalResult = RegisterDefMapBeforeMain(macro_map_UI2EvalResult)
MakeResultFloat(fconvert.s(1f))
__cxa_atexit(UI2EvalResult::~UI2EvalResult, &data_24b4d18, &data_1122730)
*macro_ptr_UI2ExprTreeDef = RegisterDefMapBeforeMain(macro_map_UI2ExprTreeDef)
*macro_field_UI2PropsStatic = 0xc
*(macro_field_UI2PropsStatic + 0x68) = 4
*(macro_field_UI2PropsStatic + 0x118) = 0x3f800000
*(macro_field_UI2PropsStatic + 0x38) = gTextAlignment
*(macro_field_UI2PropsStatic + 0x48) = 5
*(macro_field_UI2PropsStatic + 0x70) = "itemScaling"
*(macro_field_UI2PropsStatic + 0xa0) = &data_1180648
*(macro_field_UI2PropsStatic + 0xd0) = 0x30
*(macro_field_UI2PropsStatic + 0xd8) = "innerScale"
*(macro_field_UI2PropsStatic + 0xe0) = "float"
*(macro_field_UI2PropsStatic + 0x138) = 0xb0
*(macro_field_UI2PropsStatic + 0x178) = 0x19
*(macro_field_UI2PropsStatic + 0x1a0) = 0x28
*(macro_field_UI2PropsStatic + 0x1a8) = "image"
*(macro_field_UI2PropsStatic + 0x1e0) = 3
*(macro_field_UI2PropsStatic + 0x208) = 0x34
*(macro_field_UI2PropsStatic + 0x210) = "imageRotate"
*(macro_field_UI2PropsStatic + 0x240) = &data_1180988
*(macro_field_UI2PropsStatic + 0x270) = 0xc4
*(macro_field_UI2PropsStatic + 0x278) = "dimensions"
*(macro_field_UI2PropsStatic + 0x280) = "Vec2I"
*(macro_field_UI2PropsStatic + 0x2b8) = V2I0
*(macro_field_UI2PropsStatic + 0x2d8) = 0x100
*(macro_field_UI2PropsStatic + 0x2e0) = "numTableItems"
*(macro_field_UI2PropsStatic + 0x320) = -1
*(macro_field_UI2PropsStatic + 0x340) = 0xd4
*(macro_field_UI2PropsStatic + 0x348) = "spacingMin"
*(macro_field_UI2PropsStatic + 0x3a8) = 0xdc
*(macro_field_UI2PropsStatic + 0x3b0) = "spacingMax"
*(macro_field_UI2PropsStatic + 0x1b0) = "DefAssetPtr"
*(macro_field_UI2PropsStatic + 0x4f0) = "DefAssetPtr"
*(macro_field_UI2PropsStatic + 0x558) = "DefAssetPtr"
*(macro_field_UI2PropsStatic + 0x388) = V20
*(macro_field_UI2PropsStatic + 0x3f0) = V20
*(macro_field_UI2PropsStatic + 0x410) = 0xe4
*(macro_field_UI2PropsStatic + 0x418) = "tableItemOrder"
*(macro_field_UI2PropsStatic + 0x478) = 0x104
*(macro_field_UI2PropsStatic + 0x480) = "reverseDrawOrder"
*(macro_field_UI2PropsStatic + 0x448) = &data_11808b8
*(macro_field_UI2PropsStatic + 0x4b0) = &data_11808b8
*(macro_field_UI2PropsStatic + 0x4e0) = 0xe8
*(macro_field_UI2PropsStatic + 0x4e8) = "sublayout"
*(macro_field_UI2PropsStatic + 0x520) = 0x1e
*(macro_field_UI2PropsStatic + 0x548) = 0x110
*(macro_field_UI2PropsStatic + 0x550) = "font"
*(macro_field_UI2PropsStatic + 0x140) = "particleAsset"
*(macro_field_UI2PropsStatic + 0x148) = "DefAssetPtr"
*(macro_field_UI2PropsStatic + 0x588) = 0x12
*(macro_field_UI2PropsStatic + 0x590) = "sys/debugfont.font"
*(macro_field_UI2PropsStatic + 0x5b0) = 0x12c
*(macro_field_UI2PropsStatic + 0x5b8) = "forceWordWrap"
*(macro_field_UI2PropsStatic + 0x5e8) = &data_1180ac8
*(macro_field_UI2PropsStatic + 0x618) = 0x148
*(macro_field_UI2PropsStatic + 0x620) = "textStyle"
*(macro_field_UI2PropsStatic + 0x650) = &data_1180b18
*(macro_field_UI2PropsStatic + 0x680) = 0x14c
*(macro_field_UI2PropsStatic + 0x688) = "shadowOffset"
*(macro_field_UI2PropsStatic + 0x350) = "Vec2"
*(macro_field_UI2PropsStatic + 0x3b8) = "Vec2"
*(macro_field_UI2PropsStatic + 0x690) = "Vec2"
*(macro_field_UI2PropsStatic + 0x6e8) = 0x17f
*(macro_field_UI2PropsStatic + 0x6f0) = "textColorSelected"
*(macro_field_UI2PropsStatic + 0x750) = 0x183
*(macro_field_UI2PropsStatic + 0x758) = "textColorOutlineSelected"
*(macro_field_UI2PropsStatic + 0x7b8) = 0x187
*(macro_field_UI2PropsStatic + 0x730) = gRgbaIBlack
*(macro_field_UI2PropsStatic + 0x798) = gRgbaIBlack
*(macro_field_UI2PropsStatic + 0x7c0) = "boxColorSelected"
*(macro_field_UI2PropsStatic + 0x6f8) = "ColorRgbaI"
*(macro_field_UI2PropsStatic + 0x760) = "ColorRgbaI"
*(macro_field_UI2PropsStatic + 0x7c8) = "ColorRgbaI"
*(macro_field_UI2PropsStatic + 0x120) = 0
*(macro_field_UI2PropsStatic + 0x2c0) = 0
*(macro_field_UI2PropsStatic + 0x328) = 0
*(macro_field_UI2PropsStatic + 0x800) = gRgbaIWhite
*(macro_field_UI2PropsStatic + 0x820) = 0x18c
*(macro_field_UI2PropsStatic + 0x828) = "maxChars"
*(macro_field_UI2PropsStatic + 0x390) = 0
*(macro_field_UI2PropsStatic + 0x3f8) = 0
*(macro_field_UI2PropsStatic + 8) = "itemAlignment"
*(macro_field_UI2PropsStatic + 0x10) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x78) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x218) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x2e8) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x420) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x488) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x5c0) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x628) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x830) = &data_746c1b
*(macro_field_UI2PropsStatic + 0x58) = &data_793a18
*(macro_field_UI2PropsStatic + 0xc0) = &data_793a18
*(macro_field_UI2PropsStatic + 0x128) = &data_793a18
*(macro_field_UI2PropsStatic + 0x190) = &data_793a18
*(macro_field_UI2PropsStatic + 0x1f8) = &data_793a18
*(macro_field_UI2PropsStatic + 0x260) = &data_793a18
*(macro_field_UI2PropsStatic + 0x2c8) = &data_793a18
*(macro_field_UI2PropsStatic + 0x330) = &data_793a18
*(macro_field_UI2PropsStatic + 0x398) = &data_793a18
*(macro_field_UI2PropsStatic + 0x400) = &data_793a18
*(macro_field_UI2PropsStatic + 0x468) = &data_793a18
*(macro_field_UI2PropsStatic + 0x4d0) = &data_793a18
*(macro_field_UI2PropsStatic + 0x538) = &data_793a18
*(macro_field_UI2PropsStatic + 0x5a0) = &data_793a18
*(macro_field_UI2PropsStatic + 0x608) = &data_793a18
*(macro_field_UI2PropsStatic + 0x670) = &data_793a18
*(macro_field_UI2PropsStatic + 0x6d8) = &data_793a18
*(macro_field_UI2PropsStatic + 0x740) = &data_793a18
*(macro_field_UI2PropsStatic + 0x7a8) = &data_793a18
*(macro_field_UI2PropsStatic + 0x810) = &data_793a18
*(macro_field_UI2PropsStatic + 0x878) = &data_793a18
*(macro_field_UI2PropsStatic + 0x18) = 0
*(macro_field_UI2PropsStatic + 0x20) = 0
*(macro_field_UI2PropsStatic + 0x28) = 0
*(macro_field_UI2PropsStatic + 0x30) = 0
*(macro_field_UI2PropsStatic + 0x40) = 0
*(macro_field_UI2PropsStatic + 0x50) = 2
*(macro_field_UI2PropsStatic + 0x60) = 4
*(macro_field_UI2PropsStatic + 0x80) = 0
*(macro_field_UI2PropsStatic + 0x88) = 0
*(macro_field_UI2PropsStatic + 0x90) = 0
*(macro_field_UI2PropsStatic + 0x98) = 0
*(macro_field_UI2PropsStatic + 0xa8) = 0
*(macro_field_UI2PropsStatic + 0xb0) = 9
*(macro_field_UI2PropsStatic + 0xb8) = 2
*(macro_field_UI2PropsStatic + 0xc8) = 4
*(macro_field_UI2PropsStatic + 0xe8) = 0
*(macro_field_UI2PropsStatic + 0xf0) = 0
*(macro_field_UI2PropsStatic + 0x100) = 0
*(macro_field_UI2PropsStatic + 0x108) = 0
*(macro_field_UI2PropsStatic + 0x110) = 0
*(macro_field_UI2PropsStatic + 0xf8) = 0
*(macro_field_UI2PropsStatic + 0x130) = 4
*(macro_field_UI2PropsStatic + 0x150) = 0
*(macro_field_UI2PropsStatic + 0x158) = 0
*(macro_field_UI2PropsStatic + 0x160) = 0
*(macro_field_UI2PropsStatic + 0x168) = 0
*(macro_field_UI2PropsStatic + 0x170) = 0
*(macro_field_UI2PropsStatic + 0x180) = 0
*(macro_field_UI2PropsStatic + 0x188) = 0
*(macro_field_UI2PropsStatic + 0x198) = 8
*(macro_field_UI2PropsStatic + 0x1b8) = 0
*(macro_field_UI2PropsStatic + 0x1c0) = 0
*(macro_field_UI2PropsStatic + 0x1c8) = 0
*(macro_field_UI2PropsStatic + 0x1d0) = 0
*(macro_field_UI2PropsStatic + 0x1d8) = 0
*(macro_field_UI2PropsStatic + 0x1e8) = 0
*(macro_field_UI2PropsStatic + 0x1f0) = 0
*(macro_field_UI2PropsStatic + 0x200) = 8
*(macro_field_UI2PropsStatic + 0x220) = 0
*(macro_field_UI2PropsStatic + 0x228) = 0
*(macro_field_UI2PropsStatic + 0x238) = 0
*(macro_field_UI2PropsStatic + 0x230) = 0
*(macro_field_UI2PropsStatic + 0x248) = 0
*(macro_field_UI2PropsStatic + 0x250) = 0
*(macro_field_UI2PropsStatic + 0x258) = 2
*(macro_field_UI2PropsStatic + 0x268) = 4
*(macro_field_UI2PropsStatic + 0x288) = 0
*(macro_field_UI2PropsStatic + 0x290) = 0
*(macro_field_UI2PropsStatic + 0x2a0) = 0
*(macro_field_UI2PropsStatic + 0x298) = 0
*(macro_field_UI2PropsStatic + 0x2b0) = 0
*(macro_field_UI2PropsStatic + 0x2a8) = 0
*(macro_field_UI2PropsStatic + 0x2d0) = 8
*(macro_field_UI2PropsStatic + 0x2f0) = 0
*(macro_field_UI2PropsStatic + 0x2f8) = 0
*(macro_field_UI2PropsStatic + 0x308) = 0
*(macro_field_UI2PropsStatic + 0x300) = 0
*(macro_field_UI2PropsStatic + 0x318) = 0
*(macro_field_UI2PropsStatic + 0x310) = 0
*(macro_field_UI2PropsStatic + 0x338) = 4
*(macro_field_UI2PropsStatic + 0x358) = 0
*(macro_field_UI2PropsStatic + 0x360) = 0
*(macro_field_UI2PropsStatic + 0x370) = 0
*(macro_field_UI2PropsStatic + 0x368) = 0
*(macro_field_UI2PropsStatic + 0x380) = 0
*(macro_field_UI2PropsStatic + 0x378) = 0
*(macro_field_UI2PropsStatic + 0x3a0) = 8
*(macro_field_UI2PropsStatic + 0x3c0) = 0
*(macro_field_UI2PropsStatic + 0x3c8) = 0
*(macro_field_UI2PropsStatic + 0x3d8) = 0
*(macro_field_UI2PropsStatic + 0x3d0) = 0
*(macro_field_UI2PropsStatic + 0x3e8) = 0
*(macro_field_UI2PropsStatic + 0x3e0) = 0
*(macro_field_UI2PropsStatic + 0x408) = 8
*(macro_field_UI2PropsStatic + 0x428) = 0
*(macro_field_UI2PropsStatic + 0x430) = 0
*(macro_field_UI2PropsStatic + 0x440) = 0
*(macro_field_UI2PropsStatic + 0x438) = 0
*(macro_field_UI2PropsStatic + 0x450) = 0
*(macro_field_UI2PropsStatic + 0x458) = 0
*(macro_field_UI2PropsStatic + 0x460) = 2
*(macro_field_UI2PropsStatic + 0x470) = 4
*(macro_field_UI2PropsStatic + 0x490) = 0
*(macro_field_UI2PropsStatic + 0x498) = 0
*(macro_field_UI2PropsStatic + 0x4a8) = 0
*(macro_field_UI2PropsStatic + 0x4a0) = 0
*(macro_field_UI2PropsStatic + 0x4b8) = 0
*(macro_field_UI2PropsStatic + 0x4c0) = 0
*(macro_field_UI2PropsStatic + 0x4c8) = 2
*(macro_field_UI2PropsStatic + 0x4d8) = 4
*(macro_field_UI2PropsStatic + 0x4f8) = 0
*(macro_field_UI2PropsStatic + 0x500) = 0
*(macro_field_UI2PropsStatic + 0x510) = 0
*(macro_field_UI2PropsStatic + 0x508) = 0
*(macro_field_UI2PropsStatic + 0x518) = 0
*(macro_field_UI2PropsStatic + 0x530) = 0
*(macro_field_UI2PropsStatic + 0x528) = 0
*(macro_field_UI2PropsStatic + 0x540) = 8
*(macro_field_UI2PropsStatic + 0x560) = 0
*(macro_field_UI2PropsStatic + 0x568) = 0
*(macro_field_UI2PropsStatic + 0x578) = 0
*(macro_field_UI2PropsStatic + 0x570) = 0
*(macro_field_UI2PropsStatic + 0x580) = 0
*(macro_field_UI2PropsStatic + 0x598) = 0
*(macro_field_UI2PropsStatic + 0x5a8) = 8
*(macro_field_UI2PropsStatic + 0x5c8) = 0
*(macro_field_UI2PropsStatic + 0x5d0) = 0
*(macro_field_UI2PropsStatic + 0x5e0) = 0
*(macro_field_UI2PropsStatic + 0x5d8) = 0
*(macro_field_UI2PropsStatic + 0x5f0) = 0
*(macro_field_UI2PropsStatic + 0x5f8) = 0
*(macro_field_UI2PropsStatic + 0x600) = 2
*(macro_field_UI2PropsStatic + 0x610) = 4
*(macro_field_UI2PropsStatic + 0x630) = 0
*(macro_field_UI2PropsStatic + 0x638) = 0
*(macro_field_UI2PropsStatic + 0x648) = 0
*(macro_field_UI2PropsStatic + 0x640) = 0
*(macro_field_UI2PropsStatic + 0x658) = 0
*(macro_field_UI2PropsStatic + 0x660) = 0
*(macro_field_UI2PropsStatic + 0x668) = 2
*(macro_field_UI2PropsStatic + 0x678) = 4
*(macro_field_UI2PropsStatic + 0x698) = 0
*(macro_field_UI2PropsStatic + 0x6a0) = 0
*(macro_field_UI2PropsStatic + 0x6b0) = 0
*(macro_field_UI2PropsStatic + 0x6a8) = 0
*(macro_field_UI2PropsStatic + 0x6c0) = 0
*(macro_field_UI2PropsStatic + 0x6b8) = 0
*(macro_field_UI2PropsStatic + 0x6c8) = &data_24b48c0
*(macro_field_UI2PropsStatic + 0x6d0) = 0
*(macro_field_UI2PropsStatic + 0x6e0) = 8
*(macro_field_UI2PropsStatic + 0x700) = 0
*(macro_field_UI2PropsStatic + 0x708) = 0
*(macro_field_UI2PropsStatic + 0x718) = 0
*(macro_field_UI2PropsStatic + 0x710) = 0
*(macro_field_UI2PropsStatic + 0x728) = 0
*(macro_field_UI2PropsStatic + 0x720) = 0
*(macro_field_UI2PropsStatic + 0x738) = 0
*(macro_field_UI2PropsStatic + 0x748) = 4
*(macro_field_UI2PropsStatic + 0x768) = 0
*(macro_field_UI2PropsStatic + 0x770) = 0
*(macro_field_UI2PropsStatic + 0x780) = 0
*(macro_field_UI2PropsStatic + 0x778) = 0
*(macro_field_UI2PropsStatic + 0x790) = 0
*(macro_field_UI2PropsStatic + 0x788) = 0
*(macro_field_UI2PropsStatic + 0x7a0) = 0
*(macro_field_UI2PropsStatic + 0x7b0) = 4
*(macro_field_UI2PropsStatic + 0x7d0) = 0
*(macro_field_UI2PropsStatic + 0x7d8) = 0
*(macro_field_UI2PropsStatic + 0x7e8) = 0
*(macro_field_UI2PropsStatic + 0x7e0) = 0
*(macro_field_UI2PropsStatic + 0x7f8) = 0
*(macro_field_UI2PropsStatic + 0x7f0) = 0
*(macro_field_UI2PropsStatic + 0x808) = 0
*(macro_field_UI2PropsStatic + 0x818) = 4
*(macro_field_UI2PropsStatic + 0x838) = 0
*(macro_field_UI2PropsStatic + 0x840) = 0
*(macro_field_UI2PropsStatic + 0x850) = 0
*(macro_field_UI2PropsStatic + 0x848) = 0
*(macro_field_UI2PropsStatic + 0x860) = 0
*(macro_field_UI2PropsStatic + 0x858) = 0
*(macro_field_UI2PropsStatic + 0x870) = 0
*(macro_field_UI2PropsStatic + 0x868) = 0
*(macro_field_UI2PropsStatic + 0x880) = 4
uint64_t x0_47 = RegisterDefMapBeforeMain(macro_map_UI2PropsStatic)
*macro_ptr_UI2PropsStatic = x0_47
*defMapUI2PropsStatic = x0_47
__builtin_memset(&data_24b4da8, 0, 0x90)
data_24b4da8 = 9
XString::XString()
&data_24b4dc8:8
XString::XString()
XString::XString()
&data_24b4e08:8
XString::XString()
__cxa_atexit(UI2EvalResult::~UI2EvalResult, &data_24b4da8, &data_1122730)
*(gUI2 + 0x18) = 1
*(gUI2 + 0x40) = 1
*(gUI2 + 0x20) = zx.o(0)
*(gUI2 + 0x30) = zx.o(0)
data_24b4c50 = 0
*(gUI2 + 8) = 0
*(gUI2 + 0x10) = 0
*gUI2 = 0
*(gUI2 + 0x48) = 0
data_24b4c38 = _vtable_for_UI2HitResult + 0x10
*(gUI2Editor + 0x6018) = _vtable_for_UI2HitResult + 0x10
*(gUI2Editor + 0x6020) = 0
*(gUI2Editor + 0x6030) = 0
data_24b4c40.q = 0
int128_t v0_3
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
int128_t gAnimCurve_1
int128_t v17
int128_t gAnimLoop_1
int128_t v19
int128_t v20
int128_t v21
int128_t v22
int128_t v23
v0_3, v1, v2, v3, v4, v5, v6, v7, gAnimCurve_1, v17, gAnimLoop_1, v19, v20, v21, v22, v23 =
    memset(gUI2Editor + 0x8c0b0, 0, 0x330)
v1 = data_1180f78
v20 = data_1180f88
v21 = data_1180f98
v2 = data_1180f28
v3 = data_1180f38
v4 = data_1180f48
v5 = data_1180f58
v6 = data_1180ee8
v7 = data_1180ef8
gAnimCurve_1 = gAnimCurve
v17 = data_1180f18
gAnimLoop_1 = gAnimLoop
v19 = data_1180ed8
v23 = data_1180ea8.o
v22 = data_1180eb8.o
*(gUI2Editor + 0x8c184) = data_1180f68
*(gUI2Editor + 0x8c194) = v1
*(gUI2Editor + 0x8c1a4) = v20
*(gUI2Editor + 0x8c144) = v2
*(gUI2Editor + 0x8c154) = v3
*(gUI2Editor + 0x8c164) = v4
*(gUI2Editor + 0x8c174) = v5
*(gUI2Editor + 0x8c104) = v6
*(gUI2Editor + 0x8c114) = v7
*(gUI2Editor + 0x8c124) = gAnimCurve_1
*(gUI2Editor + 0x8c134) = v17
*(gUI2Editor + 0x8c0d4) = v22
*(gUI2Editor + 0x8c0e4) = gAnimLoop_1
*(gUI2Editor + 0x8c0f4) = v19
*(gUI2Editor + 0x8c1b4) = v21
*(gUI2Editor + 0x8c0c4) = v23
*(gUI2Editor + 0x8c204) = v6
*(gUI2Editor + 0x8c214) = v7
__builtin_memcpy(gUI2Editor + 0x8c224, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x65\xf2\x78\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00\x"
"e5\xe9\x76\x00\x00\x00\x00\x00\x1a\x00\x00\x00\x00\x00\x00\x00\x84\xa3\x72\x00\x00\x00\x00\x00\x1b"
"00\x00\x00\x00\x00\x00\x00\x90\xa3\x72\x00\x00\x00\x00\x00\x1c\x00\x00\x00\x00\x00\x00\x00\xa6\xd7"
"75\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xcb\x17\x75\x00\x00\x00\x00\x00\x03\x00\x00"
"00\x00\x00\x00\x00\xb0\xf7\x79\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x82\x9f\x72\x00"
"00\x00\x00\x00\x"
"
    0xa0)
*(gUI2Editor + 0x8c1c4) = v23
*(gUI2Editor + 0x8c1d4) = v22
*(gUI2Editor + 0x8c1e4) = gAnimLoop_1
*(gUI2Editor + 0x8c1f4) = v19
*(gUI2Editor + 0x8c304) = v6
*(gUI2Editor + 0x8c314) = v7
__builtin_memcpy(gUI2Editor + 0x8c324, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x65\xf2\x78\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00\x"
"e5\xe9\x76\x00\x00\x00\x00\x00\x1a\x00\x00\x00\x00\x00\x00\x00\x84\xa3\x72\x00\x00\x00\x00\x00\x1b"
"00\x00\x00\x00\x00\x00\x00\x90\xa3\x72\x00\x00\x00\x00\x00\x1c\x00\x00\x00\x00\x00\x00\x00\xa6\xd7"
"75\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xcb\x17\x75\x00\x00\x00\x00\x00\x03\x00\x00"
"00\x00\x00\x00\x00\xb0\xf7\x79\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x82\x9f\x72\x00"
"00\x00\x00\x00\x"
"
    0xa0)
*(gUI2Editor + 0x8c2c4) = v23
*(gUI2Editor + 0x8c2d4) = v22
*(gUI2Editor + 0x8c2e4) = gAnimLoop_1
*(gUI2Editor + 0x8c2f4) = v19
data_24b4980 = _vtable_for_UI2StateDecl + 0x10
int64_t* x25 = *UI2StateDeclI_head

if (x25 == 0)
label_104caa4:
    uint32_t x8_29 = *UI2StateDeclI_counter
    data_24b4988 = x25
    data_24b4990 = "numProps"
    *UI2StateDeclI_counter = x8_29 + 1
    *UI2StateDeclI_head = &data_24b4980
    x25 = &data_24b4980
else
    int64_t* x21_4 = x25
    
    while (true)
        char* s1_9 = x21_4[2]
        
        if (strcasecmp(s1_9, "numProps") == 0)
            data_24b4990 = s1_9
            break
        
        x21_4 = x21_4[1]
        
        if (x21_4 == 0)
            goto label_104caa4

int64_t* x22_3 = x25
data_24b4998 = _vtable_for_UI2StateDecl + 0x10
data_24b4980 = _vtable_for_UI2StateDeclInt + 0x10

while (true)
    char* s1_10 = x22_3[2]
    
    if (strcasecmp(s1_10, "propName") == 0)
        data_24b49a8 = s1_10
        break
    
    x22_3 = x22_3[1]
    
    if (x22_3 == 0)
        uint32_t x8_32 = *UI2StateDeclI_counter
        data_24b49a0 = x25
        data_24b49a8 = "propName"
        x25 = &data_24b4998
        *UI2StateDeclI_counter = x8_32 + 1
        *UI2StateDeclI_head = &data_24b4998
        break

int64_t* x22_4 = x25
data_24b49b0 = _vtable_for_UI2StateDecl + 0x10
data_24b4998 = _vtable_for_UI2StateDeclText + 0x10

while (true)
    char* s1_11 = x22_4[2]
    
    if (strcasecmp(s1_11, "propValue") == 0)
        data_24b49c0 = s1_11
        break
    
    x22_4 = x22_4[1]
    
    if (x22_4 == 0)
        uint32_t x8_34 = *UI2StateDeclI_counter
        data_24b49b8 = x25
        data_24b49c0 = "propValue"
        x25 = &data_24b49b0
        *UI2StateDeclI_counter = x8_34 + 1
        *UI2StateDeclI_head = &data_24b49b0
        break

int64_t* x22_5 = x25
data_24b49b0 = _vtable_for_UI2StateDeclText + 0x10
data_24b49c8 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_12 = x22_5[2]
    
    if (strcasecmp(s1_12, "value_Color") == 0)
        data_24b49d8 = s1_12
        break
    
    x22_5 = x22_5[1]
    
    if (x22_5 == 0)
        uint32_t x8_37 = *UI2StateDeclI_counter
        data_24b49d0 = x25
        data_24b49d8 = "value_Color"
        *UI2StateDeclI_counter = x8_37 + 1
        *UI2StateDeclI_head = &data_24b49c8
        x25 = &data_24b49c8
        break

int64_t* x22_6 = x25
data_24b49e0 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_13 = x22_6[2]
    
    if (strcasecmp(s1_13, "value_ColorColor") == 0)
        data_24b49f0 = s1_13
        break
    
    x22_6 = x22_6[1]
    
    if (x22_6 == 0)
        uint32_t x8_40 = *UI2StateDeclI_counter
        data_24b49e8 = x25
        data_24b49f0 = "value_ColorColor"
        x25 = &data_24b49e0
        *UI2StateDeclI_counter = x8_40 + 1
        *UI2StateDeclI_head = &data_24b49e0
        break

int64_t* x22_7 = x25
data_24b49f8 = _vtable_for_UI2StateDecl + 0x10
data_24b49e0 = _vtable_for_UI2StateDeclColor + 0x10

while (true)
    char* s1_14 = x22_7[2]
    
    if (strcasecmp(s1_14, "propValue_inherited") == 0)
        data_24b4a08 = s1_14
        break
    
    x22_7 = x22_7[1]
    
    if (x22_7 == 0)
        uint32_t x8_43 = *UI2StateDeclI_counter
        data_24b4a00 = x25
        data_24b4a08 = "propValue_inherited"
        x25 = &data_24b49f8
        *UI2StateDeclI_counter = x8_43 + 1
        *UI2StateDeclI_head = &data_24b49f8
        break

int64_t* x22_8 = x25
data_24b4a10 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_15 = x22_8[2]
    
    if (strcasecmp(s1_15, "property_selected") == 0)
        data_24b4a20 = s1_15
        break
    
    x22_8 = x22_8[1]
    
    if (x22_8 == 0)
        uint32_t x8_46 = *UI2StateDeclI_counter
        data_24b4a18 = x25
        data_24b4a20 = "property_selected"
        x25 = &data_24b4a10
        *UI2StateDeclI_counter = x8_46 + 1
        *UI2StateDeclI_head = &data_24b4a10
        break

int64_t* x22_9 = x25
data_24b4a28 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_16 = x22_9[2]
    
    if (strcasecmp(s1_16, "propertyComboBox_selected") == 0)
        data_24b4a38 = s1_16
        data_24b4a40 = _vtable_for_UI2StateDecl + 0x10
        
        if (x25 == 0)
        label_104cdec:
            uint32_t x9_10 = *UI2StateDeclI_counter
            data_24b4a48 = x25
            data_24b4a50 = "propertyEditBox_selected"
            x25 = &data_24b4a40
            *UI2StateDeclI_counter = x9_10 + 1
            *UI2StateDeclI_head = &data_24b4a40
            break
    else
        x22_9 = x22_9[1]
        
        if (x22_9 != 0)
            continue
        else
            uint32_t x9_8 = *UI2StateDeclI_counter + 1
            data_24b4a30 = x25
            data_24b4a38 = "propertyComboBox_selected"
            *UI2StateDeclI_head = &data_24b4a28
            *UI2StateDeclI_counter = x9_8
            data_24b4a40 = _vtable_for_UI2StateDecl + 0x10
            x25 = &data_24b4a28
    
    int64_t* x22_10 = x25
    
    while (true)
        char* s1_17 = x22_10[2]
        
        if (strcasecmp(s1_17, "propertyEditBox_selected") == 0)
            data_24b4a50 = s1_17
            break
        
        x22_10 = x22_10[1]
        
        if (x22_10 == 0)
            goto label_104cdec
    
    break

int64_t* x22_11 = x25
data_24b4a58 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_18 = x22_11[2]
    
    if (strcasecmp(s1_18, "propertyColorBox_selected") == 0)
        data_24b4a68 = s1_18
        break
    
    x22_11 = x22_11[1]
    
    if (x22_11 == 0)
        uint32_t x8_50 = *UI2StateDeclI_counter
        data_24b4a60 = x25
        data_24b4a68 = "propertyColorBox_selected"
        x25 = &data_24b4a58
        *UI2StateDeclI_counter = x8_50 + 1
        *UI2StateDeclI_head = &data_24b4a58
        break

int64_t* x22_12 = x25
data_24b4a70 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_19 = x22_12[2]
    
    if (strcasecmp(s1_19, "propertyFileBox_selected") == 0)
        data_24b4a80 = s1_19
        break
    
    x22_12 = x22_12[1]
    
    if (x22_12 == 0)
        uint32_t x8_53 = *UI2StateDeclI_counter
        data_24b4a78 = x25
        data_24b4a80 = "propertyFileBox_selected"
        x25 = &data_24b4a70
        *UI2StateDeclI_counter = x8_53 + 1
        *UI2StateDeclI_head = &data_24b4a70
        break

int64_t* x22_13 = x25
data_24b4a88 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_20 = x22_13[2]
    
    if (strcasecmp(s1_20, "propertyUndoBtn_selected") == 0)
        data_24b4a98 = s1_20
        data_24b4aa0 = _vtable_for_UI2StateDecl + 0x10
        
        if (x25 == 0)
        label_104cf7c:
            uint32_t x9_15 = *UI2StateDeclI_counter
            data_24b4aa8 = x25
            data_24b4ab0 = "propertyPlusBtn_selected"
            x25 = &data_24b4aa0
            *UI2StateDeclI_counter = x9_15 + 1
            *UI2StateDeclI_head = &data_24b4aa0
            break
    else
        x22_13 = x22_13[1]
        
        if (x22_13 != 0)
            continue
        else
            uint32_t x9_13 = *UI2StateDeclI_counter + 1
            data_24b4a90 = x25
            data_24b4a98 = "propertyUndoBtn_selected"
            *UI2StateDeclI_head = &data_24b4a88
            *UI2StateDeclI_counter = x9_13
            data_24b4aa0 = _vtable_for_UI2StateDecl + 0x10
            x25 = &data_24b4a88
    
    int64_t* x22_14 = x25
    
    while (true)
        char* s1_21 = x22_14[2]
        
        if (strcasecmp(s1_21, "propertyPlusBtn_selected") == 0)
            data_24b4ab0 = s1_21
            break
        
        x22_14 = x22_14[1]
        
        if (x22_14 == 0)
            goto label_104cf7c
    
    break

int64_t* x22_15 = x25
data_24b4ab8 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_22 = x22_15[2]
    
    if (strcasecmp(s1_22, "propertyMinusBtn_selected") == 0)
        data_24b4ac8 = s1_22
        break
    
    x22_15 = x22_15[1]
    
    if (x22_15 == 0)
        uint32_t x8_57 = *UI2StateDeclI_counter
        data_24b4ac0 = x25
        data_24b4ac8 = "propertyMinusBtn_selected"
        x25 = &data_24b4ab8
        *UI2StateDeclI_counter = x8_57 + 1
        *UI2StateDeclI_head = &data_24b4ab8
        break

int64_t* x22_16 = x25
data_24b4ad0 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_23 = x22_16[2]
    
    if (strcasecmp(s1_23, "comboBox_open") == 0)
        data_24b4ae0 = s1_23
        break
    
    x22_16 = x22_16[1]
    
    if (x22_16 == 0)
        uint32_t x8_60 = *UI2StateDeclI_counter
        data_24b4ad8 = x25
        data_24b4ae0 = "comboBox_open"
        x25 = &data_24b4ad0
        *UI2StateDeclI_counter = x8_60 + 1
        *UI2StateDeclI_head = &data_24b4ad0
        break

int64_t* x22_17 = x25
data_24b4ae8 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_24 = x22_17[2]
    
    if (strcasecmp(s1_24, "comboBox_itemText") == 0)
        data_24b4ae8 = _vtable_for_UI2StateDeclText + 0x10
        data_24b4af8 = s1_24
        data_24b4b00 = _vtable_for_UI2StateDecl + 0x10
        
        if (x25 == 0)
        label_104d118:
            uint32_t x9_20 = *UI2StateDeclI_counter
            data_24b4b08 = x25
            data_24b4b10 = "comboBox_numItems"
            x25 = &data_24b4b00
            *UI2StateDeclI_counter = x9_20 + 1
            *UI2StateDeclI_head = &data_24b4b00
            break
    else
        x22_17 = x22_17[1]
        
        if (x22_17 != 0)
            continue
        else
            uint32_t x9_18 = *UI2StateDeclI_counter + 1
            *UI2StateDeclI_head = &data_24b4ae8
            data_24b4ae8 = _vtable_for_UI2StateDeclText + 0x10
            data_24b4af0 = x25
            *UI2StateDeclI_counter = x9_18
            data_24b4af8 = "comboBox_itemText"
            data_24b4b00 = _vtable_for_UI2StateDecl + 0x10
            x25 = &data_24b4ae8
    
    int64_t* x22_18 = x25
    
    while (true)
        char* s1_25 = x22_18[2]
        
        if (strcasecmp(s1_25, "comboBox_numItems") == 0)
            data_24b4b10 = s1_25
            break
        
        x22_18 = x22_18[1]
        
        if (x22_18 == 0)
            goto label_104d118
    
    break

int64_t* x22_19 = x25
data_24b4b00 = _vtable_for_UI2StateDeclInt + 0x10
data_24b4b18 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_26 = x22_19[2]
    
    if (strcasecmp(s1_26, "numLayers") == 0)
        data_24b4b28 = s1_26
        break
    
    x22_19 = x22_19[1]
    
    if (x22_19 == 0)
        uint32_t x8_64 = *UI2StateDeclI_counter
        data_24b4b20 = x25
        data_24b4b28 = "numLayers"
        x25 = &data_24b4b18
        *UI2StateDeclI_counter = x8_64 + 1
        *UI2StateDeclI_head = &data_24b4b18
        break

int64_t* x21_5 = x25
data_24b4b18 = _vtable_for_UI2StateDeclInt + 0x10
data_24b4b30 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_27 = x21_5[2]
    
    if (strcasecmp(s1_27, "layerName") == 0)
        data_24b4b40 = s1_27
        break
    
    x21_5 = x21_5[1]
    
    if (x21_5 == 0)
        uint32_t x8_67 = *UI2StateDeclI_counter
        data_24b4b38 = x25
        data_24b4b40 = "layerName"
        x25 = &data_24b4b30
        *UI2StateDeclI_counter = x8_67 + 1
        *UI2StateDeclI_head = &data_24b4b30
        break

int64_t* x21_6 = x25
data_24b4b30 = _vtable_for_UI2StateDeclText + 0x10
data_24b4b48 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_28 = x21_6[2]
    
    if (strcasecmp(s1_28, "layer_selected") == 0)
        data_24b4b58 = s1_28
        data_24b4b60 = _vtable_for_UI2StateDecl + 0x10
        
        if (x25 == 0)
        label_104d2cc:
            uint32_t x9_25 = *UI2StateDeclI_counter
            data_24b4b68 = x25
            data_24b4b70 = "layer_hidden"
            x25 = &data_24b4b60
            *UI2StateDeclI_counter = x9_25 + 1
            *UI2StateDeclI_head = &data_24b4b60
            break
    else
        x21_6 = x21_6[1]
        
        if (x21_6 != 0)
            continue
        else
            uint32_t x9_23 = *UI2StateDeclI_counter + 1
            data_24b4b50 = x25
            data_24b4b58 = "layer_selected"
            *UI2StateDeclI_head = &data_24b4b48
            *UI2StateDeclI_counter = x9_23
            data_24b4b60 = _vtable_for_UI2StateDecl + 0x10
            x25 = &data_24b4b48
    
    int64_t* x21_7 = x25
    
    while (true)
        char* s1_29 = x21_7[2]
        
        if (strcasecmp(s1_29, "layer_hidden") == 0)
            data_24b4b70 = s1_29
            break
        
        x21_7 = x21_7[1]
        
        if (x21_7 == 0)
            goto label_104d2cc
    
    break

int64_t* x21_8 = x25
data_24b4b78 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_30 = x21_8[2]
    
    if (strcasecmp(s1_30, "layer_locked") == 0)
        data_24b4b88 = s1_30
        break
    
    x21_8 = x21_8[1]
    
    if (x21_8 == 0)
        uint32_t x8_71 = *UI2StateDeclI_counter
        data_24b4b80 = x25
        data_24b4b88 = "layer_locked"
        x25 = &data_24b4b78
        *UI2StateDeclI_counter = x8_71 + 1
        *UI2StateDeclI_head = &data_24b4b78
        break

int64_t* x21_9 = x25
data_24b4b90 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_31 = x21_9[2]
    
    if (strcasecmp(s1_31, "layer_divergent") == 0)
        data_24b4ba0 = s1_31
        break
    
    x21_9 = x21_9[1]
    
    if (x21_9 == 0)
        uint32_t x8_74 = *UI2StateDeclI_counter
        data_24b4b98 = x25
        data_24b4ba0 = "layer_divergent"
        x25 = &data_24b4b90
        *UI2StateDeclI_counter = x8_74 + 1
        *UI2StateDeclI_head = &data_24b4b90
        break

int64_t* x21_10 = x25
data_24b4ba8 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_32 = x21_10[2]
    
    if (strcasecmp(s1_32, "layer_linked") == 0)
        data_24b4bb8 = s1_32
        data_24b4bc0 = _vtable_for_UI2StateDecl + 0x10
        
        if (x25 == 0)
        label_104d45c:
            uint32_t x9_30 = *UI2StateDeclI_counter
            data_24b4bc8 = x25
            data_24b4bd0 = "layer_group_open"
            x25 = &data_24b4bc0
            *UI2StateDeclI_counter = x9_30 + 1
            *UI2StateDeclI_head = &data_24b4bc0
            break
    else
        x21_10 = x21_10[1]
        
        if (x21_10 != 0)
            continue
        else
            uint32_t x9_28 = *UI2StateDeclI_counter + 1
            data_24b4bb0 = x25
            data_24b4bb8 = "layer_linked"
            *UI2StateDeclI_head = &data_24b4ba8
            *UI2StateDeclI_counter = x9_28
            data_24b4bc0 = _vtable_for_UI2StateDecl + 0x10
            x25 = &data_24b4ba8
    
    int64_t* x21_11 = x25
    
    while (true)
        char* s1_33 = x21_11[2]
        
        if (strcasecmp(s1_33, "layer_group_open") == 0)
            data_24b4bd0 = s1_33
            break
        
        x21_11 = x21_11[1]
        
        if (x21_11 == 0)
            goto label_104d45c
    
    break

int64_t* x21_12 = x25
data_24b4bd8 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_34 = x21_12[2]
    
    if (strcasecmp(s1_34, "layer_group_closed") == 0)
        data_24b4be8 = s1_34
        break
    
    x21_12 = x21_12[1]
    
    if (x21_12 == 0)
        uint32_t x8_78 = *UI2StateDeclI_counter
        data_24b4be0 = x25
        data_24b4be8 = "layer_group_closed"
        x25 = &data_24b4bd8
        *UI2StateDeclI_counter = x8_78 + 1
        *UI2StateDeclI_head = &data_24b4bd8
        break

int64_t* x21_13 = x25
data_24b4bf0 = _vtable_for_UI2StateDecl + 0x10

while (true)
    char* s1_35 = x21_13[2]
    
    if (strcasecmp(s1_35, "txt_layerEditorState") == 0)
        data_24b4c00 = s1_35
        break
    
    x21_13 = x21_13[1]
    
    if (x21_13 == 0)
        uint32_t x8_81 = *UI2StateDeclI_counter
        data_24b4bf8 = x25
        data_24b4c00 = "txt_layerEditorState"
        x25 = &data_24b4bf0
        *UI2StateDeclI_counter = x8_81 + 1
        *UI2StateDeclI_head = &data_24b4bf0
        break

int64_t* x21_14 = x25
data_24b4bf0 = _vtable_for_UI2StateDeclText + 0x10
data_24b4c08 = _vtable_for_UI2StateDecl + 0x10
int32_t result

while (true)
    char* s1_36 = x21_14[2]
    result = strcasecmp(s1_36, "filename")
    
    if (result == 0)
        data_24b4c08 = _vtable_for_UI2StateDeclText + 0x10
        data_24b4c18 = s1_36
        data_24b4c20 = _vtable_for_UI2StateDecl + 0x10
        
        if (x25 == 0)
        label_104d618:
            uint32_t x9_36 = *UI2StateDeclI_counter + 1
            data_24b4c28 = x25
            data_24b4c30 = "screenStyle"
            *UI2StateDeclI_counter = x9_36
            *UI2StateDeclI_head = &data_24b4c20
            break
    else
        x21_14 = x21_14[1]
        
        if (x21_14 != 0)
            continue
        else
            uint32_t x9_33 = *UI2StateDeclI_counter + 1
            *UI2StateDeclI_head = &data_24b4c08
            data_24b4c08 = _vtable_for_UI2StateDeclText + 0x10
            data_24b4c10 = x25
            *UI2StateDeclI_counter = x9_33
            data_24b4c18 = "filename"
            data_24b4c20 = _vtable_for_UI2StateDecl + 0x10
            x25 = &data_24b4c08
    
    int64_t* x21_15 = x25
    
    while (true)
        char* s1_37 = x21_15[2]
        result = strcasecmp(s1_37, "screenStyle")
        
        if (result == 0)
            data_24b4c30 = s1_37
            break
        
        x21_15 = x21_15[1]
        
        if (x21_15 == 0)
            goto label_104d618
    
    break

data_24b4c20 = _vtable_for_UI2StateDeclText + 0x10
return result
