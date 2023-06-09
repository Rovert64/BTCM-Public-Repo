static const u16 chicken_anim_ArmatureAction_values[] = {
	0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x00DD, 
	0x032F, 0x0693, 0x0A9F, 0x0EE3, 0x12EF, 0x1653, 0x18A6, 0x1982, 0x18A6, 
	0x1653, 0x12EF, 0x0EE3, 0x0A9F, 0x0693, 0x032F, 0x00DD, 0xFFFF, 0xFFFF, 
	0xFFFF, 0x0003, 0x000C, 0x0018, 0x0025, 0x0033, 0x0040, 0x004A, 0x0050, 
	0x0052, 0x0050, 0x004A, 0x0040, 0x0033, 0x0025, 0x0018, 0x000C, 0x0003, 
	0xFFFF, 0x0000, 0x0000, 0x0001, 0x0002, 0x0006, 0x000B, 0x0012, 0x001B, 
	0x0022, 0x0028, 0x002A, 0x0028, 0x0022, 0x001B, 0x0012, 0x000B, 0x0006, 
	0x0002, 0x0001, 0x0000, 0x0000, 0x0000, 0xF5D0, 0xDB15, 0xBFBB, 0xB52B, 
	0xBC08, 0xCEDC, 0xE729, 0xF960, 0x0000, 0xF960, 0xE729, 0xCEDC, 0xBC08, 
	0xB52B, 0xBC08, 0xCEDC, 0xE729, 0xF960, 0x0000, 0xFFFF, 0xFFFF, 0xFC90, 
	0xF782, 0xF91E, 0xFB8D, 0xF9DC, 0xF75D, 0xF903, 0xFDB0, 0xFFFF, 0xFDB0, 
	0xF903, 0xF75D, 0xF9DC, 0xFB8D, 0xF9DC, 0xF75D, 0xF903, 0xFDB0, 0xFFFF, 
	0x0000, 0x0000, 0x0265, 0x0B86, 0x15EE, 0x195E, 0x1732, 0x1048, 0x070A, 
	0x0177, 0x0000, 0x0177, 0x070A, 0x1048, 0x1732, 0x195E, 0x1732, 0x1048, 
	0x070A, 0x0177, 0x0000, 0x0000, 0x0000, 0xF585, 0xDAC5, 0xBF6B, 0xB48E, 
	0xBBA3, 0xCEA5, 0xE6C2, 0xF92A, 0x0000, 0xF92A, 0xE6C2, 0xCEA5, 0xBBA3, 
	0xB48E, 0xBBA3, 0xCEA5, 0xE6C2, 0xF92A, 0x0000, 0x0000, 0x0000, 0x028E, 
	0x0701, 0x074A, 0x0623, 0x06F8, 0x07B4, 0x0576, 0x01B4, 0x0000, 0x01B4, 
	0x0576, 0x07B4, 0x06F8, 0x0623, 0x06F8, 0x07B4, 0x0576, 0x01B4, 0x0000, 
	0x0000, 0x0000, 0xFEE4, 0xF9A3, 0xF2AE, 0xF01D, 0xF1C1, 0xF695, 0xFC57, 
	0xFF59, 0x0000, 0xFF59, 0xFC57, 0xF695, 0xF1C1, 0xF01D, 0xF1C1, 0xF695, 
	0xFC57, 0xFF59, 0x0000, 
};

static const u16 chicken_anim_ArmatureAction_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0014, 0x0006, 0x0014, 0x001A, 0x0014, 0x002E, 
	0x0015, 0x0042, 0x0015, 0x0057, 0x0015, 0x006C, 0x0015, 0x0081, 0x0015, 
	0x0096, 0x0015, 0x00AB, 
};

static const struct Animation chicken_anim_ArmatureAction[] = {
	0,
	0,
	0,
	1,
	20,
	ANIMINDEX_NUMPARTS(chicken_anim_ArmatureAction_indices),
	chicken_anim_ArmatureAction_values,
	chicken_anim_ArmatureAction_indices,
	0,
};

