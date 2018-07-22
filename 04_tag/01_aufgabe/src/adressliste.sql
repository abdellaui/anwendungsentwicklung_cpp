
--

CREATE TABLE IF NOT EXISTS `adressliste` (
  `id` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
  `name` varchar(255) NOT NULL,
  `vorname` varchar(255) NOT NULL,
  `anrede` varchar(255) NOT NULL,
  `strasse` varchar(255) NOT NULL,
  `hausnummer` varchar(255) NOT NULL,
  `plz` varchar(255) NOT NULL,
  `stadt` varchar(255) NOT NULL,
  `land` varchar(255) NOT NULL
);


INSERT INTO `adressliste` (`id`, `name`, `vorname`, `anrede`, `strasse`, `hausnummer`, `plz`, `stadt`, `land`) VALUES
(1, 'Name', 'Vorname', 'Anrede', 'Strasse', 'Hausnummer', 'PLZ', 'Stadt', 'Land'),
(2, 'Müller', 'Hans', 'maennlich', 'Hihi', '112', '44544', 'Dortmund', 'Deutschland'),
(3, 'Muster', 'Peter', 'maennlich', 'Hoho', '212', '44644', 'Aachen', 'Deutschland'),
(4, 'Max', 'Günter', 'maennlich', 'Huhu', '312', '44744', 'Bochum', 'Deutschland');
