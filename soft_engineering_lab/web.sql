-- phpMyAdmin SQL Dump
-- version 4.6.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 28, 2018 at 06:22 PM
-- Server version: 5.7.14
-- PHP Version: 5.6.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `web`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin_details`
--

CREATE TABLE `admin_details` (
  `admin_id` int(20) NOT NULL,
  `admin_name` varchar(50) NOT NULL,
  `phone_number` text NOT NULL,
  `address` varchar(50) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admin_details`
--

INSERT INTO `admin_details` (`admin_id`, `admin_name`, `phone_number`, `address`) VALUES
(2, 'murad', 'Dhaka', '01515641087'),
(3, 'Akash', 'Gopalganj', '01515640089'),
(4, 'Akash', 'Gopalganj', '01515640089');

-- --------------------------------------------------------

--
-- Table structure for table `bus_details`
--

CREATE TABLE `bus_details` (
  `bus_number` int(20) NOT NULL,
  `driver_id` int(20) NOT NULL,
  `conductor_id` int(20) NOT NULL,
  `route` varchar(50) NOT NULL,
  `price` varchar(40) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bus_details`
--

INSERT INTO `bus_details` (`bus_number`, `driver_id`, `conductor_id`, `route`, `price`) VALUES
(1212, 2, 4, 'dhaka-khulna', '600');

-- --------------------------------------------------------

--
-- Table structure for table `conductor_details`
--

CREATE TABLE `conductor_details` (
  `conductor_id` int(10) NOT NULL,
  `conductor_name` varchar(30) NOT NULL,
  `address` varchar(50) NOT NULL,
  `phone_number` text NOT NULL,
  `shift_time` varchar(30) NOT NULL,
  `date_of_joining` varchar(30) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `conductor_details`
--

INSERT INTO `conductor_details` (`conductor_id`, `conductor_name`, `address`, `phone_number`, `shift_time`, `date_of_joining`) VALUES
(1, '', 'gopalganj', '01564213265', '11:22', '11/02/2005'),
(2, 'Jaman', 'Khulna', '01564213263', '09:33', '13/04/2004'),
(4, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009'),
(4, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009'),
(4, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009'),
(4, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009'),
(4, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009'),
(4, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009'),
(8, 'Liton', 'Dhaka', '0196587466', '11:55', '12/01/2009');

-- --------------------------------------------------------

--
-- Table structure for table `driver_details`
--

CREATE TABLE `driver_details` (
  `driver_id` int(12) NOT NULL,
  `driver_name` varchar(255) NOT NULL,
  `address` varchar(255) NOT NULL,
  `phone_number` text NOT NULL,
  `shift_time` varchar(255) NOT NULL,
  `joining_time` varchar(255) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `driver_details`
--

INSERT INTO `driver_details` (`driver_id`, `driver_name`, `address`, `phone_number`, `shift_time`, `joining_time`) VALUES
(11, 'niyz', 'madarganj', '0165656', '5656', '456363'),
(94859, 'dfkjd', 'dkfdkl', '38473', '12736', '28344'),
(1, 'sdhfjdklsfjdk', 'sdjkhf', '01557202541', '18268136', '1273618'),
(8, 'Jahidul Afrad', 'Narsindhi', '016549873215', '12.44', '12/12/1998'),
(12, 'aksh', 'khulna', '01256554666', '12.00', '12/12/1992'),
(13, 'aksh', 'khulna', '01256554666', '12.00', '12/12/1992'),
(17, 'akshl', 'khulna', '01256554666', '12.00', '12/12/1992');

-- --------------------------------------------------------

--
-- Table structure for table `trip_details`
--

CREATE TABLE `trip_details` (
  `trip_id` int(20) NOT NULL,
  `bus_number` int(25) NOT NULL,
  `driver_id` int(20) NOT NULL,
  `conductor_id` int(20) NOT NULL,
  `date` varchar(20) NOT NULL,
  `start_time` varchar(20) NOT NULL,
  `end_time` varchar(20) NOT NULL,
  `end_place` varchar(30) NOT NULL,
  `ticket_rate` varchar(20) NOT NULL,
  `no_of_passengers` varchar(50) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `trip_details`
--

INSERT INTO `trip_details` (`trip_id`, `bus_number`, `driver_id`, `conductor_id`, `date`, `start_time`, `end_time`, `end_place`, `ticket_rate`, `no_of_passengers`) VALUES
(1, 1212, 2, 5, '12/12/2018', '', '6:30', 'Khulna', '600', ''),
(2, 1213, 3, 4, '12/12/2018', '', '6:30', 'Khulna', '600', '50'),
(7, 1219, 7, 7, '12/11/2018', '11', '6:30', 'Khustia', '600', '50'),
(10, 1546, 9, 10, '12/12/2018', '8:30', '12:30', 'Madaripur', '500', '50');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin_details`
--
ALTER TABLE `admin_details`
  ADD PRIMARY KEY (`admin_id`);

--
-- Indexes for table `bus_details`
--
ALTER TABLE `bus_details`
  ADD PRIMARY KEY (`bus_number`),
  ADD UNIQUE KEY `driver_id` (`driver_id`),
  ADD UNIQUE KEY `conductor_id` (`conductor_id`);

--
-- Indexes for table `driver_details`
--
ALTER TABLE `driver_details`
  ADD PRIMARY KEY (`driver_id`);

--
-- Indexes for table `trip_details`
--
ALTER TABLE `trip_details`
  ADD PRIMARY KEY (`trip_id`),
  ADD UNIQUE KEY `bus_number` (`bus_number`),
  ADD UNIQUE KEY `conductor_id` (`driver_id`),
  ADD UNIQUE KEY `driver_id` (`conductor_id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
