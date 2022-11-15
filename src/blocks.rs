
#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct Block {
    pub id: u64,
    pub hash: str,
    pub prev_hash: str,
    pub timestamp: i64,
    pub data: str,
    pub nonce: u64
}
