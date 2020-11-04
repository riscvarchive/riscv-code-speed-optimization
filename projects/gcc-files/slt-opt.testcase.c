int sublt (int i) { return i < 10; }
int suble (int i) { return i <= 10; }
int subgt (int i) { return i > 10; }
int subge (int i) { return i >= 10; }

int sublt_z (int i) { return i < 0; }
int suble_z (int i) { return i <= 0; }
int subgt_z (int i) { return i > 0; }
int subge_z (int i) { return i >= 0; }

int sublt_z_edge1 (int i) { return i < -1; }
int suble_z_edge1 (int i) { return i <= -1; }
int subgt_z_edge1 (int i) { return i > -1; }
int subge_z_edge1 (int i) { return i >= -1; }

int sublt_z_edge2 (int i) { return i < 1; }
int suble_z_edge2 (int i) { return i <= 1; }
int subgt_z_edge2 (int i) { return i > 1; }
int subge_z_edge2 (int i) { return i >= 1; }

int sublt_li (int i) { return i < 0xf00f; }
int suble_li (int i) { return i <= 0xf00f; }
int subgt_li (int i) { return i > 0xf00f; }
int subge_li (int i) { return i >= 0xf00f; }

int sublt_lui (int i) { return i < 0xffff0000; }
int suble_lui (int i) { return i <= 0xffff0000; }
int subgt_lui (int i) { return i > 0xffff0000; }
int subge_lui (int i) { return i >= 0xffff0000; }

int sublt_li_edge1 (int i) { return i < 0xfffff7ff; }
int suble_li_edge1 (int i) { return i <= 0xfffff7ff; }
int subgt_li_edge1 (int i) { return i > 0xfffff7ff; }
int subge_li_edge1 (int i) { return i >= 0xfffff7ff; }

int sublt_li_edge2 (int i) { return i < 0x000007ff; }
int suble_li_edge2 (int i) { return i <= 0x000007ff; }
int subgt_li_edge2 (int i) { return i > 0x000007ff; }
int subge_li_edge2 (int i) { return i >= 0x000007ff; }

int sublt_lui_edge (int i) { return i < 0xfffffeff; }
int suble_lui_edge (int i) { return i <= 0xfffffeff; }
int subgt_lui_edge (int i) { return i > 0xfffffeff; }
int subge_lui_edge (int i) { return i >= 0xfffffeff; }

int u_sublt (unsigned int i) { return i < 10; }
int u_suble (unsigned int i) { return i <= 10; }
int u_subgt (unsigned int i) { return i > 10; }
int u_subge (unsigned int i) { return i >= 10; }

int u_sublt_z (unsigned int i) { return i < 0; }
int u_suble_z (unsigned int i) { return i <= 0; }
int u_subgt_z (unsigned int i) { return i > 0; }
int u_subge_z (unsigned int i) { return i >= 0; }

int u_sublt_z_edge1 (unsigned int i) { return i < -1; }
int u_suble_z_edge1 (unsigned int i) { return i <= -1; }
int u_subgt_z_edge1 (unsigned int i) { return i > -1; }
int u_subge_z_edge1 (unsigned int i) { return i >= -1; }

int u_sublt_z_edge2 (unsigned int i) { return i < 1; }
int u_suble_z_edge2 (unsigned int i) { return i <= 1; }
int u_subgt_z_edge2 (unsigned int i) { return i > 1; }
int u_subge_z_edge2 (unsigned int i) { return i >= 1; }

int u_sublt_li (unsigned int i) { return i < 0xf00f; }
int u_suble_li (unsigned int i) { return i <= 0xf00f; }
int u_subgt_li (unsigned int i) { return i > 0xf00f; }
int u_subge_li (unsigned int i) { return i >= 0xf00f; }

int u_sublt_lui (unsigned int i) { return i < 0xffff0000; }
int u_suble_lui (unsigned int i) { return i <= 0xffff0000; }
int u_subgt_lui (unsigned int i) { return i > 0xffff0000; }
int u_subge_lui (unsigned int i) { return i >= 0xffff0000; }

int u_sublt_li_edge1 (unsigned int i) { return i < 0xfffff7ff; }
int u_suble_li_edge1 (unsigned int i) { return i <= 0xfffff7ff; }
int u_subgt_li_edge1 (unsigned int i) { return i > 0xfffff7ff; }
int u_subge_li_edge1 (unsigned int i) { return i >= 0xfffff7ff; }

int u_sublt_li_edge2 (unsigned int i) { return i < 0x000007ff; }
int u_suble_li_edge2 (unsigned int i) { return i <= 0x000007ff; }
int u_subgt_li_edge2 (unsigned int i) { return i > 0x000007ff; }
int u_subge_li_edge2 (unsigned int i) { return i >= 0x000007ff; }

int u_sublt_lui_edge (unsigned int i) { return i < 0xfffffeff; }
int u_suble_lui_edge (unsigned int i) { return i <= 0xfffffeff; }
int u_subgt_lui_edge (unsigned int i) { return i > 0xfffffeff; }
int u_subge_lui_edge (unsigned int i) { return i >= 0xfffffeff; }
