from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'madhav_agrawal_assn_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', 'launcher.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='madhav',
    maintainer_email='madhav@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'd_rover1 = madhav_agrawal_assn_2.d_rover1:main',
                'd_rover2 = madhav_agrawal_assn_2.d_rover2:main',
                'd_rover3 = madhav_agrawal_assn_2.d_rover3:main',
                'd_rover4 = madhav_agrawal_assn_2.d_rover4:main',
                'basestation = madhav_agrawal_assn_2.basestation:main',
        ],
    },
)
