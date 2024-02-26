SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for course
-- ----------------------------
DROP TABLE IF EXISTS `course`;
CREATE TABLE `course` (
  `id` int NOT NULL,
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `score` int DEFAULT NULL,
  `value` int DEFAULT '5',
  `tid` int DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of course
-- ----------------------------
INSERT INTO `course` VALUES ('1', 'English', '89', '5', '13');
INSERT INTO `course` VALUES ('2', 'gMath', '67', '5', '19');
INSERT INTO `course` VALUES ('3', 'gMath', '78', '5', '14');
INSERT INTO `course` VALUES ('4', 'gMath', '67', '5', '15');
INSERT INTO `course` VALUES ('5', 'gMath', '85', '5', '13');
INSERT INTO `course` VALUES ('6', 'gMath', '46', '5', '19');
INSERT INTO `course` VALUES ('7', 'gMath', '23', '5', '15');
