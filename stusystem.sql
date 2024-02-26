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
INSERT INTO `course` VALUES ('8', 'gMath', '64', '5', '16');
INSERT INTO `course` VALUES ('9', 'gMath', '44', '5', '17');
INSERT INTO `course` VALUES ('10', 'gMath', '55', '5', '18');
INSERT INTO `course` VALUES ('11', 'gMath', '77', '5', '15');
INSERT INTO `course` VALUES ('12', 'gMath', '88', '5', '4');
INSERT INTO `course` VALUES ('13', 'gMath', '99', '5', '15');
INSERT INTO `course` VALUES ('14', 'gMath', '100', '5', '0');
INSERT INTO `course` VALUES ('15', 'gMath', '45', '5', '0');
INSERT INTO `course` VALUES ('16', 'gMath', '76', '5', '18');
INSERT INTO `course` VALUES ('17', 'gMath', '82', '5', '10');
INSERT INTO `course` VALUES ('18', 'gMath', '84', '5', '17');
INSERT INTO `course` VALUES ('19', 'gMath', '81', '5', '12');
INSERT INTO `course` VALUES ('20', 'gMath', '86', '5', '9');


-- ----------------------------
-- Table structure for department
-- ----------------------------
DROP TABLE IF EXISTS `department`;
CREATE TABLE `department` (
  `did` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `name` varchar(255) NOT NULL,
  `director` varchar(255) DEFAULT NULL,
  `capcity` int DEFAULT NULL,
  `num` int DEFAULT '461',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of department
-- ----------------------------
INSERT INTO `department` VALUES ('J1009', 'Architecture Department', 'Xiaojuan', '500', '461');
INSERT INTO `department` VALUES ('Y1018', 'Art Department', 'Xiaojun', '500', '461');
INSERT INTO `department` VALUES ('S1014', 'Biology Department', 'Xiaomin', '500', '461');
INSERT INTO `department` VALUES ('H1003', 'Chemistry Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('C1001', 'Communications Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1019', 'Computer Science Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('J1017', 'Economics Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1011', 'Education Department', 'Xiaobin', '500', '461');
INSERT INTO `department` VALUES ('D1015', 'Electrical Engineering Department', 'Xiaotao', '500', '461');
INSERT INTO `department` VALUES ('G1008', 'Engineering Department', 'Xiaoliang', '500', '461');
INSERT INTO `department` VALUES ('W1007', 'Foreign Languages Department', 'Xiaohua', '500', '461');
INSERT INTO `department` VALUES ('D1006', 'Geography Department', 'Xiaomei', '500', '461');
INSERT INTO `department` VALUES ('L1005', 'History Department', 'Xiaoqiang', '500', '461');
INSERT INTO `department` VALUES ('G1016', 'Management Department', 'Xiaoyan', '500', '461');
INSERT INTO `department` VALUES ('S1012', 'Mathematics Department', 'Xiaolei', '500', '461');
INSERT INTO `department` VALUES ('Y1004', 'Medical Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('Y1020', 'Music Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('W1013', 'Physics Department', 'Xiaona', '500', '461');
INSERT INTO `department` VALUES ('Z1010', 'Politics and Law Department', 'Xiaohui', '500', '461');
INSERT INTO `department` VALUES ('T1002', 'Sports Department', 'Xiaojun', '500', '461');




-- ----------------------------
-- Table structure for teacher
-- ----------------------------
DROP TABLE IF EXISTS `teacher`;
CREATE TABLE `teacher` (
  `tid` int NOT NULL AUTO_INCREMENT,
  `tname` varchar(255) DEFAULT NULL,
  `sex` varchar(255) DEFAULT NULL,
  `age` int DEFAULT NULL,
  `title` varchar(255) DEFAULT NULL,
  `salary` decimal(10,0) DEFAULT NULL,
  PRIMARY KEY (`tid`)
) ENGINE=InnoDB AUTO_INCREMENT=18 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of teacher
-- ----------------------------
INSERT INTO `teacher` VALUES ('1', 'Qiao Feng', 'male', '35', 'Principal', '20000');
INSERT INTO `teacher` VALUES ('2', 'Duan Yu', 'male', '28', 'Department Chair', '15000');
INSERT INTO `teacher` VALUES ('3', 'Xu Zhu', 'male', '30', 'Professor', '18000');
INSERT INTO `teacher` VALUES ('4', 'Murong Fu', 'male', '38', 'Department Chair', '22000');
INSERT INTO `teacher` VALUES ('5', 'Wang Yuyan', 'female', '26', 'Department Chairs Spouse', '16000');
INSERT INTO `teacher` VALUES ('6', 'A Zhu', 'female', '32', 'Department Chairs Spouse', '14000');
INSERT INTO `teacher` VALUES ('7', 'A Bi', 'female', '24', 'Faculty Assistant', '8000');
INSERT INTO `teacher` VALUES ('8', 'Zhong Ling', 'female', '18', 'Faculty Assistant', '6000');
INSERT INTO `teacher` VALUES ('9', 'Mu Wanqing', 'female', '20', 'Faculty Assistant', '7000');
INSERT INTO `teacher` VALUES ('10', 'Meng Gu', 'female', '40', 'Dean', '25000');
INSERT INTO `teacher` VALUES ('11', 'Tianshan Tonglao', 'female', '99', 'Head Dean', '30000');
INSERT INTO `teacher` VALUES ('12', 'Li QiuShui', 'female', '88', 'Chancellor', '28000');
INSERT INTO `teacher` VALUES ('13', 'Wu Ya zi', 'male', '100', 'Founder', '35000');
INSERT INTO `teacher` VALUES ('14', 'Ding Chunqiu', 'male', '66', 'Senior Lecturer', '26000');
INSERT INTO `teacher` VALUES ('15', 'Su Xinghe', 'male', '72', 'Senior Lecturer', '24000');
INSERT INTO `teacher` VALUES ('16', 'Duan Yanqing', 'male', '54', 'Professor', '12000');
INSERT INTO `teacher` VALUES ('17', 'You Tanzhi', 'male', '20', 'Research Assistant', '5000');

-- ----------------------------
-- Table structure for student
-- ----------------------------
DROP TABLE IF EXISTS `student`;
CREATE TABLE `student` (
  `id` int NOT NULL AUTO_INCREMENT,
  `sname` varchar(255) NOT NULL,
  `sex` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `age` int NOT NULL,
  `native` varchar(255) DEFAULT NULL COMMENT 'birthplace',
  `dept` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=23 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of student
-- ----------------------------
INSERT INTO `student` VALUES ('1', 'zhangsan', 'mail', '18', 'guangzhou', 'computer');
INSERT INTO `student` VALUES ('2', 'Li Si', 'female', '19', 'Shenzhen, Guangdong', 'Mathematics Department');
INSERT INTO `student` VALUES ('3', 'Wang Wu', 'male', '20', 'Zhuhai, Guangdong', 'Physics Department');
INSERT INTO `student` VALUES ('4', 'Zhao Liu', 'female', '17', 'Shantou, Guangdong', 'Chemistry Department');
INSERT INTO `student` VALUES ('5', 'Qian Qi', 'male', '18', 'Shaoguan, Guangdong', 'Biology Department');
INSERT INTO `student` VALUES ('6', 'Sun Ba', 'female', '19', 'Foshan, Guangdong', 'Geography Department');
INSERT INTO `student` VALUES ('7', 'Zhou Jiu', 'male', '20', 'Jiangmen, Guangdong', 'History Department');
INSERT INTO `student` VALUES ('8', 'Wu Shi', 'female', '17', 'Zhanjiang, Guangdong', 'Art Department');
INSERT INTO `student` VALUES ('9', 'Chen Yi', 'male', '18', 'Maoming, Guangdong', 'Sports Department');
INSERT INTO `student` VALUES ('10', 'Zhang San', 'female', '19', 'Zhaoqing, Guangdong', 'Foreign Languages Department');
INSERT INTO `student` VALUES ('11', 'Li Si', 'male', '20', 'Huizhou, Guangdong', 'Music Department');
INSERT INTO `student` VALUES ('12', 'Wang Wu', 'female', '17', 'Meizhou, Guangdong', 'Education Department');
INSERT INTO `student` VALUES ('13', 'Zhao Liu', 'male', '18', 'Shanwei, Guangdong', 'Politics and Law Department');
INSERT INTO `student` VALUES ('14', 'Qian Qi', 'female', '19', 'Heyuan, Guangdong', 'Communications Department');
INSERT INTO `student` VALUES ('15', 'Sun Ba', 'male', '20', 'Yangjiang, Guangdong', 'Medical Department');
INSERT INTO `student` VALUES ('16', 'Zhou Jiu', 'female', '17', 'Qingyuan, Guangdong', 'Management Department');
INSERT INTO `student` VALUES ('17', 'Wu Shi', 'male', '18', 'Dongguan, Guangdong', 'Economics Department');
INSERT INTO `student` VALUES ('18', 'Chen Yi', 'male', '19', 'Zhongshan, Guangdong', 'Engineering Department');
INSERT INTO `student` VALUES ('19', 'Li Si', 'male', '20', 'Chaozhou, Guangdong', 'Architecture Department');
INSERT INTO `student` VALUES ('20', 'Wang Wu', 'male', '17', 'Jieyang, Guangdong', 'Electrical Engineering Department');
