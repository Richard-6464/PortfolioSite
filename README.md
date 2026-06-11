# Richard Garnica — Personal Portfolio Website

## Project Overview

This is a personal portfolio website built using HTML and CSS. The purpose of the site is to present a little bit of myself — my background, skills, projects, and goals — to anyone who visits. This site is a single page that is designed to walk the visitor through who I am, what I have studied, what I have built, and how to get in touch with me.

**Full Name:** Richard Garnica  
**School:** Queens College — Bachelor of Science in Computer Science  
**Expected Graduation:** December 2026  

**Professional Bio:**  
A senior at Queens College studying Computer Science, expected to graduate December 2026, with a background in networking, cloud computing, and software development.

---

## Target Audience

The site is intended for a general audience, with a primary focus on peers, given the friendly and conversational tone used throughout. However, it is also open to employers and recruiters who may be looking for an entry-level candidate or intern.

---

## Content Strategy

### What I Want to Communicate
- My journey into technology through high school and college
- The technical and soft skills I have developed over the years
- Projects I have completed as part of my studies
- My professional goals and what I enjoy outside of code
- How to contact me or view my resume

### Skills Highlighted
**Technical:**
- Java / C++
- HTML & CSS
- JavaScript
- SQL
- AWS Infrastructure
- Git / GitHub
- Cisco Packet Tracer / Networking

**Soft Skills:**
- Communication
- Teamwork
- Problem Solving
- Multitasking
- Critical Thinking
- Adaptability

### Projects Showcased
Only two projects are currently showcased, both written in C++. Java projects from a previous laptop were unfortunately lost and cannot be recovered.

- **Eight Queens Problem** — finds all configurations where 8 queens do not threaten one another on a chessboard
- **Towers of Hanoi** — moves all disks from one tower to another following the rules of the puzzle, returning step-by-step instructions

### Achievements & Experiences Worth Highlighting
- AWS Academy Cloud Foundations Certification (received end of senior year of high school)
- Cisco Networking coursework through Queens Technical High School's exploratory program
- C++ algorithm projects from Queens College coursework
- Configured and deployed a network infrastructure using switches and Ethernet cabling to connect multiple arcade machines, enabling credit-based payment processing and gameplay across all devices
- Hands-on experience with PCB boards and electrical components

### Calls to Action
Visitors are encouraged to:
- Contact via email
- View or download the resume (PDF)
- Visit the GitHub profile
- Visit the LinkedIn profile

### Resume
Yes — accessible via the **View Resume** button in the contact section, opens as a PDF in a new tab.

### External Links
- [GitHub](https://github.com/Richard-6464)
- [LinkedIn](https://www.linkedin.com/in/richard-garnica-179b56223)
- [Queens Technical High School](https://www.queenstechhs.org)
- [AWS Academy](https://aws.amazon.com/training/awsacademy/)
- [Queens College Logo Source](https://www.thecollegetour.com)
- [AWS Badge Source](https://openbadgepassport.com)
- [Eight Queens Image Source](https://www.aiai.ed.ac.uk/~gwickler/images/8-queens-config.png)
- [Tower of Hanoi Image Source](https://media.geeksforgeeks.org/wp-content/uploads/tower-of-hanoi.png)

---

## Information Organization

### Pages / Sections
The site is a single HTML page divided into the following sections, each accessible via the navigation bar:

1. **Home** — portrait photo and short intro
2. **About (Why Technology?)** — backstory covering high school, Cisco networking, and AWS
3. **Skills & Core Toolkit** — technical skills, soft skills, and key milestones
4. **Featured Work** — two C++ projects displayed as cards
5. **Dreams, Goals & Passions** — professional aspirations and hobbies
6. **Contact** — email button, resume button, GitHub and LinkedIn links

### Layout Approach
- Side-by-side two-column layout for most sections (main content left, sidebar right)
- Project cards displayed in a horizontal row
- Single full-width contact box at the bottom

---

## Visual Design

### Overall Style
Minimalist and professional — clean white cards on a light gray background with a dark navy header.

### Color Scheme
Dark Navy `#2C3E50` for the header background, headings, body text
Blue `#3498DB` Accent color, links, section borders, buttons
Light Gray `#F8F9FA` for the page background
White `#FFFFFF` for the card backgrounds

The navy and blue palette was chosen to feel professional and technical, fitting for a Computer Science portfolio.

### Text related
- **Font family:** Sans-serif (applied globally)
- **Section headings (h3):** 24px with a blue left border accent
- **Card headings (h4):** 18px with a light bottom border
- **Body text:** 16px, line-height 1.6
- **Small text / captions:** 13–14px

### Visual Hierarchy
1. Header with name and navigation
2. Blue left-bordered section headings guide the eye to each new topic
3. White cards contain the detailed content within each section
4. Buttons and links in blue draw attention to calls to action

### Consistency
- All info cards share the same white background, border, border-radius, and padding
- Skill tags use the same pill style throughout
- Section headings all use the same blue left border styling

### Wireframe
Only done in my head. Never drew it out nor digitalized it.

## Interaction / Functionality

### Interactive Elements
- **Navigation bar** — anchor jump links that scroll the page to each section
- **Email button** — mailto link that opens the user's default email application
- **View Resume button** — opens the PDF resume in a new browser tab
- **GitHub and LinkedIn links** — open in a new tab

### Contact Form
No contact form is included. Contact is handled through a direct mailto link. Clicking the Email button opens whatever default email app the visitor has configured on their device (Apple Mail on Mac, Outlook on Windows, Gmail on Android, etc.).

### JavaScript
No JavaScript has been implemented at this time. All interactivity is handled through HTML and CSS.

### User Feedback
- Email button opens the default mail client
- Resume button opens the PDF in a new tab
- Nav links scroll to the correct section
- Navigation links change color to blue on hover
- Social links change color to blue on hover

### How Interactivity Improves Experience
The anchor navigation allows visitors to jump directly to the section they care about without having to scroll through the entire page. The direct email and resume buttons give visitors a clear and immediate action to take after viewing the portfolio.

---

## Technical Overview

### Technologies Used
- **HTML**: semantic structure using elements such as section, article, aside, figure, figcaption, address, nav, header, main, ul, and li
- **CSS** — layout via Flexbox, card styling, skill tag pills, responsive media query

### Responsiveness
- lack of media query
- Keeps everything porportional to whatever window size is

### Accessibility Considerations
- Semantic HTML improves screen reader navigation
- All images include descriptive alt attributes
- Navy and blue contrast against white card backgrounds
- Sans-serif font at 14–16px keeps body text readable

### File Structure
```
project/
├── index.html
├── style.css
├── README.md
├── wireframe.jpg
├── IMG_5002.jpeg
├── Richard Garnica Resume 2025.pdf
├── no_goto_8_queens.cpp
├── fancy_eight_queens.cpp
└── tower_hanoi.cpp
```

---

## Timeline / Project Milestones
- set up all sections and basic HTML structure
- styled the page using CSS (card, layout, colors, etc.)
- Tried replacing most divs with semantic HTML elements to make it accessible
- Added both projects, the eight queens and the Towers of Hanoi
- added my technical and soft using skill tags to the skills section
- attempted to include media Query, but ran out of time (deleted)
- Completed README.md file