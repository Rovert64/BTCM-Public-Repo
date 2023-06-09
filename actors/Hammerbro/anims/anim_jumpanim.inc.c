static const s16 Hammerbro_anim_jumpanim_values[] = {
	0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFF3C, 0xFD43, 0xFA90, 0xF79D, 
	0xF4EA, 0xF2F2, 0xF22F, 0xFFFF, 0xFFFF, 0xFFFE, 0xFFFC, 0xFFFC, 0x0002, 
	0x000C, 0x0015, 0x0019, 0x0000, 0x0000, 0x0011, 0x003E, 0x007B, 0x00BE, 
	0x00FB, 0x0126, 0x0137, 0x1E67, 0x1E67, 0x1BE2, 0x152F, 0x0BB2, 0x012F, 
	0xF7AB, 0xF0F2, 0xEE6A, 0xFDCE, 0xFDCE, 0xFE10, 0xFEB2, 0xFF6C, 0xFFF5, 
	0x002C, 0x0028, 0x001E, 0x02EC, 0x02EC, 0x02C0, 0x0239, 0x0150, 0x0024, 
	0xFEFE, 0xFE2B, 0xFDDC, 0x3553, 0x3553, 0x3195, 0x2741, 0x17DB, 0x065D, 
	0xF6E3, 0xEC8B, 0xE8D1, 0xF7A1, 0xF7A1, 0xF846, 0xFA1E, 0xFCCD, 0xFF51, 
	0x00B5, 0x0117, 0x011D, 0x0321, 0x0321, 0x034C, 0x0372, 0x02CB, 0x00EB, 
	0xFE87, 0xFCB8, 0xFC0D, 0xFFFF, 0xFFFF, 0x02B7, 0x09F3, 0x143F, 0x1FA9, 
	0x29F4, 0x312F, 0x33E6, 0xFFFF, 0xFFFF, 0xFFEE, 0xFFB1, 0xFF35, 0xFE7F, 
	0xFDBF, 0xFD2F, 0xFCF8, 0x0000, 0x0000, 0x0034, 0x00B9, 0x015F, 0x01EC, 
	0x023C, 0x0256, 0x0259, 0x3553, 0x3553, 0x34D2, 0x3386, 0x31C0, 0x2FD1, 
	0x2E0D, 0x2CC3, 0x2C43, 0xF7A1, 0xF7A1, 0xF7B7, 0xF7F0, 0xF83F, 0xF896, 
	0xF8E6, 0xF921, 0xF937, 0x0321, 0x0321, 0x0327, 0x0337, 0x034A, 0x035B, 
	0x0367, 0x036D, 0x036F, 0x0000, 0x0000, 0xFF1E, 0xFCD7, 0xF9B6, 0xF64D, 
	0xF32D, 0xF0E6, 0xF004, 0x0000, 0x0000, 0x0005, 0x000F, 0x0019, 0x001E, 
	0x001E, 0x001B, 0x0019, 0x0000, 0x0000, 0xFFEE, 0xFFC1, 0xFF83, 0xFF3E, 
	0xFEFF, 0xFED1, 0xFEBF, 
};

static const u16 Hammerbro_anim_jumpanim_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0009, 0x0003, 0x0009, 
	0x000C, 0x0009, 0x0015, 0x0009, 0x001E, 0x0009, 0x0027, 0x0009, 0x0030, 
	0x0009, 0x0039, 0x0009, 0x0042, 0x0009, 0x004B, 0x0009, 0x0054, 0x0009, 
	0x005D, 0x0009, 0x0066, 0x0009, 0x006F, 0x0009, 0x0078, 0x0009, 0x0081, 
	0x0009, 0x008A, 0x0009, 0x0093, 0x0009, 0x009C, 
};

static const struct Animation Hammerbro_anim_jumpanim = {
	1,
	0,
	0,
	1,
	8,
	ANIMINDEX_NUMPARTS(Hammerbro_anim_jumpanim_indices),
	Hammerbro_anim_jumpanim_values,
	Hammerbro_anim_jumpanim_indices,
	0,
};

